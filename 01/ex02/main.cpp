/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";

	std::string &stringREF = string;
	std::string *stringPTR = &string;

	std::cout << "\033[1;32m" << "base string address      : " << "\033[1;m" << &string     << std::endl;
	std::cout << "\033[1;34m" << "reference string address : " << "\033[1;m" << &stringREF << std::endl;
	std::cout << "\033[1;36m" << "pointer string address   : " << "\033[1;m" << &stringPTR << std::endl << std::endl;

	std::cout << "\033[1;32m" << "base string value        : " << "\033[1;m" << string     << std::endl;
	std::cout << "\033[1;34m" << "reference string value   : " << "\033[1;m" << stringREF << std::endl;
	std::cout << "\033[1;36m" << "pointer string value     : " << "\033[1;m" << stringPTR << std::endl << "\033[1;m" << std::endl;
}