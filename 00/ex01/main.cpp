/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:12:21 by trebours          #+#    #+#             */
/*   Updated: 2024/09/24 08:12:24 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_action(std::string line, Phonebook &test)
{
	if (!line.compare("ADD"))
	{
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
		return (0);
	} else {
		system("clear");
		test.print_msg("Imput  Error");
	}
	return (-1);
}

int main()
{
	int	i = -1;
	std::string line;
	Phonebook test;
	system("clear");
	test.prompt_welcome();
	while (i == -1) {
		test.prompt_action();
		std::cout << GREEN << "> " << WHITE;
		if (!std::getline(std::cin, line))
			i = 0;
		else
			i = ft_action(line, test);
	}
}
