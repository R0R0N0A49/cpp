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

#include "HumanA.hpp"

int main()
{
	{
		std::cout << "\033[1;36m\n##########-TEST-HUMAN-A-##########\033[1;m\n\n";
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		std::cout << "\n\033[38;2;20;175;65m";
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << "\n\033[1;m";
	}
	{
		std::cout << "\033[1;36m\n##########-TEST-HUMAN-B-##########\033[1;m\n\n";
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		std::cout << "\n\033[38;2;200;30;35m";
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << "\n\033[1;m";
	}
	std::cout << "\033[1;36m\n############-END-TEST-############\033[1;m\n\n";
	return 0;
}