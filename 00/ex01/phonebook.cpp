/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
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
	std::cout << GREEN <<  "****************************\n"
			     "*   Welcome in phonebook   *\n"
			     "****************************\n" << WHITE << std::endl;
}

void	Phonebook::prompt_action() {
	std::cout << BLUE <<  "****************************\n"
			     "*    ADD = add contact     *\n"
			     "* SEARCH = print a contact *\n"
			     "*   EXIT = Exit phonebook  *\n"
			     "****************************\n" << WHITE;
}

void Phonebook::add_contact() {
	Phonebook::contact[Phonebook::index].init_all();
	++Phonebook::index;
	if (Phonebook::index == 8)
		Phonebook::index = 0;
}

static void	print_test(std::string tmp) {
	std::cout<<tmp;
}

void Phonebook::print_contact() {
	int y = 0;

	std::cout << CYAN << "|-----|----------|----------|----------|\n";
	std::cout << CYAN << "|" << CYAN_2 << "index" << CYAN << "|" << CYAN_2"first Name" << CYAN "|" << CYAN_2" last Name";
	std::cout << CYAN << "|" << CYAN_2 <<"  Nickname" << CYAN <<"|\n";
	std::cout << CYAN << "|-----|----------|----------|----------|\n" << WHITE;
	// && Phonebook::contact[y].is_exist()
	while (y < 8) {
		std::cout << CYAN << "|  " << CYAN_2 << y + 1 << CYAN_2 << "  ";
		Phonebook::contact[y].print_name();
		std::cout << "\n";
		y++;
	}
	std::cout << "\n";
}

void Phonebook::search_contacts()
{
	std::string line;
	int i = 0;

	Phonebook::print_contact();
	while (1)
	{
		std::cout << CYAN << "Index : " << WHITE;
		std::getline(std::cin, line);
		for (int j = 0; line[j]; j++)
		{
			if (!isdigit(line[j]))
			{
				std::cout << RED << "Index must be a number\n" << WHITE;
				break ;
			}
				i++;
		}
		if (i == line.length())
		{
			std::stringstream ss(line);
			int index;
			ss >> index;
			if (index <= 8 && index >= 1)
			{
				Phonebook::contact[index - 1].print_all();
				break ;
			}
			std::cout << RED << "Index must be Between 1 and 8\n" << WHITE;
		}
	}

}
