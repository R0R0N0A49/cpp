#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string src);
		~HumanB();
	public:
		void	attack();
		void	setWeapon(Weapon& weapon);
	private:
		std::string name;
		Weapon* type;
};

# endif