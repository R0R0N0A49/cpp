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

#include "Zombie.hpp"

/**
 * NewZombie :
 * This function creat and return a named zombie.
 * @param name > name of the zombie
 * @returns Zombie*
 **/
Zombie*	newZombie( std::string name);
/**
 * RandomChump :
 * This function creat and announce a named zombie.
 * @param name > name of the zombie
 * @returns NONE
 **/
void	randomChump( std::string name );

int main() {
	Zombie zombie_1("Kevin");
	Zombie* zombie_2 = newZombie("Stuart");

	std::cout << "\033[1;36m" << "\n#######################-TEST-#######################\n" << std::endl;
	std::cout << "\033[38;2;0;100;200m" << "zombie announce :" << "\33[1;m" << std::endl;
	zombie_1.announce();
	std::cout << "\33[1;33m" << "zombie creat by newZombie() :" << "\33[1;m" << std::endl;
	zombie_2->announce();
	std::cout << "\33[1;32m" << "zombie announce by randomChump() :" << "\33[1;m" << std::endl;
	randomChump("Bob");
	std::cout << "\033[1;36m" << "\n#######################-END-#######################\n" << std::endl << "\033[1;m";
	delete (zombie_2);
}
