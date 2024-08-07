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

#include <iostream>
#include "phonebook.hpp"

void	prompt_welcome()
{
	std::cout<<"****************************\n"
			   "*   welcome in phonebook   *\n"
			   "****************************\n"<<std::endl;
}

void	prompt_action()
{
	std::cout<<"****************************\n"
			   "*    ADD = add contact     *\n"
			   "* SEARCH = print a contact *\n"
			   "*   EXIT = Exit phonebook  *\n"
			   "****************************\n";
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

	prompt_welcome();
	prompt_action();
	while (i == -1) {
		std::cout<<"> ";
		std::cin >> line;
		i = ft_action(line);
	}
}