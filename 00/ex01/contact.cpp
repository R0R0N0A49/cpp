/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:08 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:12 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {
	// Contact::first = "toma";
	// Contact::last = "toma";
	// Contact::nick = "toto";
	// Contact::number = "0784261548";
	// Contact::secret = "jsp";
}

Contact::~Contact() {

}

void Contact::init_first() {
	while (1) {
		std::cout << BLUE << "First Name : " << WHITE;
		std::getline(std::cin, Contact::first);
		if (!Contact::first.empty()) {
			return ;
		}
		std::cout << RED << "First Name can't be NULL\n\033[1;m" << WHITE;
	}
}

void Contact::init_last() {
	while (1) {
		std::cout << BLUE << "Last Name : " << WHITE;
		std::getline(std::cin,  Contact::last);
		if (!Contact::last.empty()) {
			return ;
		}
		std::cout << RED << "Last Name can't be NULL\n" << WHITE;
	}
}

void Contact::init_nick() {
	while (1) {
		std::cout << BLUE << "NickName : " << WHITE;
		std::getline(std::cin,  Contact::nick);
		if (!Contact::nick.empty()) {
			return ;
		}
		std::cout << RED << "Nickname can't be NULL\n" << WHITE;
	}
}

void Contact::init_number() {
	int i = 0;

	while (1) {
		std::cout << BLUE << "number : " << WHITE;
		std::getline(std::cin,  Contact::number);
		if (Contact::number.length() == 10) {
			while (isdigit(Contact::number[i]))
				i++;
			if (i == 10)
				return ;
			else
				std::cout << RED << "Number can contain only number\n" << WHITE;
		}
		else
			std::cout << RED << "Number length must be 10\033[1;m\n" << WHITE;
	}
}

void Contact::init_secret() {
	while (1) {
		std::cout << BLUE << "darkest secret : " << WHITE;
		std::getline(std::cin,  Contact::secret);
		if (!Contact::secret.empty()) {
			return ;
		}
		std::cout << RED << "Last Name can't be NULL\033[1;m\n";
	}
}

void Contact::init_all() {
	Contact::init_first();
	Contact::init_last();
	Contact::init_nick();
	Contact::init_number();
	Contact::init_secret();
}

std::string	Contact::get_first() {
	return first;
}

void loop_print_name(std::string name)
{
	std::string tmp;

	if (name.length() > 10) {
		tmp = name;
		tmp.resize(9);
		std::cout << tmp << '.';
	}
	else if (name.length() == 10)
		std::cout << name;
	else {
		for (int i = name.length(); i < 10 ; i++)
			std::cout << " ";
		std::cout << name;
	}
}

void	Contact::print_name() {
	std::cout << CYAN << "|" << WHITE;
	loop_print_name(Contact::first);
	std::cout << CYAN << "|" << WHITE;
	loop_print_name(Contact::last);
	std::cout << CYAN << "|" << WHITE;
	loop_print_name(Contact::nick);
	std::cout << CYAN << "|";
	std::cout << "\n|-----|----------|----------|----------|" << WHITE;
}

void	Contact::print_all()
{
	system("clear");
	if (!is_exist())
	{
		std::cout << GREEN << "\n****************************\n"
								"*   CONTACT DOES\'T EXIST   *\n"
								"****************************\n" << WHITE << std::endl;
		return ;
	}
	std::cout << GREEN << "\nfirst name     : " << WHITE << Contact::first << std::endl;
	std::cout << GREEN << "last name      : " << WHITE << Contact::last << std::endl;
	std::cout << GREEN << "nickname       : " << WHITE << Contact::nick << std::endl;
	std::cout << GREEN << "phone number   : " << WHITE << Contact::number << std::endl;
	std::cout << GREEN << "darkest secret : "  << WHITE << Contact::secret << std::endl << std::endl;
}

int	Contact::is_exist() {
	if (Contact::first.empty())
		return 0;
	return 1;
}
