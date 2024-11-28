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

int main()
{
	int	i = -1;
	std::string line;
	Phonebook test;
	system("clear");
	test.prompt_welcome();
	while (i) {
		test.prompt_action();
		std::cout << GREEN << "> " << WHITE;
		if (!std::getline(std::cin, line))
			i = false;
		else
			i = test.ft_action(line, test);
	}
}
