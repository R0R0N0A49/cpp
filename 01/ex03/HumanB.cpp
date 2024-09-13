/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string src): name(src) {
	type = NULL;
}

HumanB::~HumanB(){
}

void HumanB::attack()
{
	std::cout << HumanB::name  << " attacks with their ";
	if (HumanB::type)
		std::cout << HumanB::type->getType();
	else
		std::cout << "(NULL)";
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	type = &weapon;
}

