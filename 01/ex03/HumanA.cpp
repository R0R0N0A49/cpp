/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& src, Weapon& weapon) : _name(src), _type(weapon)
{
	std::cout << "Human A creat\n";
}


HumanA::~HumanA(){
	std::cout << "Human A destroy\n";
}

void HumanA::attack()
{
	std::cout << this->_name  << " attacks with their " << this->_type.getType() << std::endl;
}


