/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/10/30 15:37:55 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() {
		Phonebook::index = 0;
	}

Phonebook::~Phonebook() {

}

void	Phonebook::prompt_welcome()
{
	std::cout << GREEN << "\n****************************\n"
							"*   Welcome in phonebook   *\n"
							"****************************\n" << WHITE << std::endl;
}

void	Phonebook::prompt_action() {
	std::cout << BLUE <<	"****************************\n"
							"*    ADD = add contact     *\n"
							"* SEARCH = print a contact *\n"
							"*   EXIT = Exit phonebook  *\n"
							"****************************\n" << WHITE;
}

void Phonebook::add_contact() {
	Phonebook::contact[Phonebook::index].init_all();
	++Phonebook::index;
	if (Phonebook::index == NMB_CONTACTS)
		Phonebook::index = 0;
}

void Phonebook::print_contact() {
	int y = 0;

	std::cout << CYAN << "|----------|----------|----------|----------|\n";
	std::cout << CYAN << "|  " << GREEN << "index" << CYAN << "   |" << GREEN"first Name";
	std::cout << CYAN "|" << GREEN" last Name";
	std::cout << CYAN << "|" << GREEN <<"  Nickname" << CYAN <<"|\n";
	std::cout << CYAN << "|----------|----------|----------|----------|\n" << WHITE;
	while (y < NMB_CONTACTS && Phonebook::contact[y].is_exist()) {
		std::cout << CYAN << "|"  << GREEN << std::setw(10) << y + 1 << WHITE;
		Phonebook::contact[y].print_name();
		std::cout << "\n";
		y++;
	}
	std::cout << "\n";
}

void	Phonebook::print_msg(std::string msg)
{
	int len = msg.length();

	std::cout << GREEN << '\n';
	for (int i = 0; i < 28; i++)
		std::cout << '*';
	std::cout << "\n*";
	for (int i = (26 - len) / 2; i > 0; i--)
		std::cout << ' ';
	std::cout << msg;
	for (int i = (26 - len) / 2; i > 0; i--)
		std::cout << ' ';
	std::cout << "*\n";
	for (int i = 0; i < 28; i++)
		std::cout << '*';
	std::cout << "\n\n" << WHITE;
}

void Phonebook::search_contacts()
{
	std::string line;
	int i = 0;

	if (!Phonebook::contact[0].is_exist()){
		print_msg("NO CONTACT");
		return ;
	}
	print_msg("SEARCH CONTACT");
	Phonebook::print_contact();
	while (1)
	{
		i = 0;
		std::cout << BLUE << "Whose information do you want to see?";
		std::cout << CYAN << "\nIndex : " << WHITE;
		std::getline(std::cin, line);
		system("clear");
		print_msg("SEARCH CONTACT");
		Phonebook::print_contact();
		for (int j = 0; line[j]; j++)
		{
			if (j == 0 && (line[j] == '-' || line[j] == '+') && line[j + 1])
				;
			else if (!isdigit(line[j]))
			{
				std::cout << RED << "Index must be a number\n" << WHITE;
				break ;
			}
			i++;
		}
		if (i == (int)line.length())
		{
			std::stringstream ss(line);
			int index;
			ss >> index;
			if (index <= NMB_CONTACTS && index >= 1)
			{
				if (Phonebook::contact[index - 1].is_exist()) {
					system("clear");
					ss << index - 1;
					Phonebook::print_msg("Contact  " + ss.str());
					Phonebook::contact[index - 1].print_all();
					break ;
				}
				std::cout << RED << "Contact not found\n" << WHITE;
			}
			else
				std::cout << RED << "Index must be Between 1 and " << NMB_CONTACTS << "\n" << WHITE;
		}
	}
}

bool	Phonebook::ft_action(std::string line, Phonebook &test) {
	if (!line.compare("ADD")) {
		system("clear");
		test.print_msg("ADD  CONTACT");
		test.add_contact();
		system("clear");
		test.print_msg("CONTACT  ADDED");
	} else if (!line.compare("SEARCH")) {
		system("clear");
		test.search_contacts();
	} else if (!line.compare("EXIT")) {
		system("clear");
		test.print_msg("Exit Phonebook");
		return (false);
	} else {
		system("clear");
		test.print_msg("Imput  Error");
	}
	return (true);
}

