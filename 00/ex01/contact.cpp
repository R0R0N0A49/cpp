/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:08 by trebours          #+#    #+#             */
/*   Updated: 2024/09/24 08:12:06 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::ft_get_line(std::string &str)
{
	int	i;

	if (!std::getline(std::cin,  str))
		exit(1);
	for (i = 0; str[i] == 32 || str[i] == '\t'; i++)
		;
	str = &str[i];
}

Contact::Contact() {
}

Contact::~Contact() {

}

void Contact::init_first() {
	while (1) {
		std::cout << BLUE << "First Name : " << WHITE;
		ft_get_line(Contact::first);
		if (!Contact::first.empty()) {
			return ;
		}
		std::cout << RED << "First Name can't be NULL\n\033[1;m" << WHITE;
	}
}

void Contact::init_last() {
	while (1) {
		std::cout << BLUE << "Last Name : " << WHITE;
		ft_get_line(Contact::last);
		if (!Contact::last.empty()) {
			return ;
		}
		std::cout << RED << "Last Name can't be NULL\n" << WHITE;
	}
}

void Contact::init_nick() {
	while (1) {
		std::cout << BLUE << "NickName : " << WHITE;
		ft_get_line(Contact::nick);
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
		ft_get_line(Contact::number);
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
		ft_get_line(Contact::secret);
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
		std::cout << std::setw(10) << name;
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
	std::cout << "\n|----------|----------|----------|----------|" << WHITE;
}

void	Contact::print_all()
{
	std::cout << GREEN << "first name     : " << WHITE << Contact::first << std::endl;
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
