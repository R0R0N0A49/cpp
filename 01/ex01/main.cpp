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

Zombie* zombieHorde(int N, std::string name );

int main()
{
	int N = 5;
	std::string name = "bob";

	Zombie* z = zombieHorde(N, name);
	if (!z) {
		std::cout << "Error\n";
		return (1);
	}
	std::cout << "\n\033[38;2;0;100;200m" << "##########-ZOMBIE-ANNOUNCEMENT-#########" << "\033[1;m\n";
	for (int i = 0; i < N; i++)
	{
		std::cout << "\033[1;36m" << "\n" + name + "_" << i + 1 << " announce :" << "\033[1;m" << std::endl;
		z[i].announce();
	}
	std::cout << "\n\033[38;2;0;100;200m" << "###############-END-TEST-###############" << "\033[1;m\n\n";
	delete [] z;
}
