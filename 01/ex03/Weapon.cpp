/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trebours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:42:47 by trebours          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:52 by trebours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string src){
	this->_type = src;
	std::cout << "Weapon creat\n";
}

Weapon::~Weapon(){
	std::cout << "Weapon destroyer called\n";
}

const std::string&	Weapon::getType() {
	return (this->_type);
}

void Weapon::setType(std::string src) {
	this->_type = src;
}

