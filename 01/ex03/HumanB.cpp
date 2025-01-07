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

HumanB::HumanB(std::string src): _name(src) {
	this->_type = NULL;
	std::cout << "Human B creat\n";
}

HumanB::~HumanB(){
	std::cout << "Human A destroy\n";
}

void HumanB::attack()
{
	std::cout << this->_name  << " attacks with their ";
	if (this->_type)
		std::cout << this->_type->getType();
	else
		std::cout << "(NULL)";
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_type = &weapon;
}
