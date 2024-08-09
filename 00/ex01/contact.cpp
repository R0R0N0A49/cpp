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
	Contact::first = "toma";
	Contact::last = "toma";
	Contact::nick = "toto";
	Contact::number = "0784261548";
	Contact::secret = "jsp";
}

Contact::~Contact() {

}

void Contact::init_first() {
	while (1) {
		std::cout << "First Name : ";
		std::getline(std::cin,  Contact::first);
		if (Contact::first.length()) {
			return ;
		}
		std::cout << RED << "First Name can't be NULL\n\033[1;m" << WHITE;
	}
}

void Contact::init_last() {
	while (1) {
		std::cout << "Last Name : ";
		std::getline(std::cin,  Contact::last);
		if (Contact::last.length()) {
			return ;
		}
		std::cout << RED << "Last Name can't be NULL\n" << WHITE;
	}
}

void Contact::init_nick() {
	while (1) {
		std::cout << "NickName : ";
		std::getline(std::cin,  Contact::nick);
		if (Contact::nick.length()) {
			return ;
		}
		std::cout << RED << "Nickname can't be NULL\n" << WHITE;
	}
}

void Contact::init_number() {
	int i = 0;

	while (1) {
		std::cout << "number : ";
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
		std::cout << "darkest secret : ";
		std::getline(std::cin,  Contact::secret);
		if (Contact::secret.length()) {
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

static std::string	ft_cute(std::string tmp) {
	if (tmp.length() == 10)
		return (tmp);
	if (tmp.length() > 10) {
		tmp.resize(9);
		tmp += '.';
	} else {
		for (int i = tmp.length();i < 10; i++)
			tmp += ' ';
	}
}

std::string	Contact::get_first() {
	return first;
}

void	Contact::print_all() {
	std::string tmp;

	std::cout << "*";
	if (Contact::first.length() > 10) {
		tmp = Contact::first;
		tmp.resize(9);
		std::cout << tmp << '.';
	}
	if (Contact::first.length() == 10)
		std::cout << Contact::first;
	else {
		for (int i = Contact::first.length(); i < 10 ; i++)
			std::cout << " ";
		std::cout << Contact::first;
	}
}

int	Contact::is_exist() {
	if (Contact::first.empty())
		return 0;
	return 1;
}
