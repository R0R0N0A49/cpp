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
		Phonebook::index = 1;
	}

Phonebook::~Phonebook() {

}

void	Phonebook::prompt_welcome()
{
	std::cout << "****************************\n"
			     "*   Welcome in phonebook   *\n"
			     "****************************\n"<<std::endl;
}

void	Phonebook::prompt_action() {
	std::cout << "****************************\n"
			     "*    ADD = add contact     *\n"
			     "* SEARCH = print a contact *\n"
			     "*   EXIT = Exit phonebook  *\n"
			     "****************************\n";
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

	for (int i = 0; i < 30; i++)
		std::cout << "*";
	std::cout << "\n";
	while (y < 8 && Phonebook::contact[y].is_exist()) {
		Phonebook::contact[y].print_all();
		std::cout << "\n" << toascii(y) << std::endl;
		y++;
	}
	std::cout << "\n";
	for (int i = 0; i < 30; i++)
		std::cout << "*";
}

















int	ft_action(std::string line)
{
	if (line.length() == 0)
		return (1);
	if (!line.compare("ADD"))
		std::cout<<"ADD"<<std::endl;
	else if (!line.compare("EXIT")) {
		std::cout << "exit" << std::endl;
		return (0);
	} else
		std::cout<<"Error input"<<std::endl;
	return (-1);
}

int main()
{
	int 		i = -1;
	std::string line;
	Phonebook test;
	test.prompt_welcome();
	test.prompt_action();
//	while (i == -1) {
//		std::cout<<"> ";
//		std::cin >> line;
//		i = ft_action(line);
//	}
//	test.add_contact();
	test.print_contact();
}