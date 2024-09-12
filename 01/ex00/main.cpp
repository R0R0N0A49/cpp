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
 * NEWZOMBIE :
 * This function creat and return a named zombie.
 * @param name > name of the zombie
 * @returns Zombie*
 **/
Zombie*	newZombie( std::string name);
/**
 * RANDOMCHUMP :
 * This function creat and announce a named zombie.
 * @param name > name of the zombie
 * @returns NONE
 **/
void	randomChump( std::string name );

int main() {
	Zombie zombie_1("Kevin");
	Zombie* zombie_2 = newZombie("Stuart");

	std::cout << "\033[1;34m" << "zombie_1 announce :" << "\33[1;m" << std::endl;
	zombie_1.announce();
	std::cout << "\33[1;33m" << "zombie_2 announce :" << "\33[1;m" << std::endl;
	zombie_2->announce();
	std::cout << "\33[1;32m" << "zombie_3 announce :" << "\33[1;m" << std::endl;
	randomChump("Bob");
	delete (zombie_2);
}
