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
	int N = 50;
	std::string name = "bob";

	Zombie* z = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		std::cout << "\033[1;34m" << "\n" + name + "_" << i + 1 << " announce :" << "\033[1;m" << std::endl;
		z[i].announce();
	}
	delete [] z;
}
