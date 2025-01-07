#ifndef HUMANA_H
#define HUMANA_H

#include "HumanB.hpp"

class HumanA
{
	public:
		HumanA(const std::string& src, Weapon& weapon);
		~HumanA();

	public:
		void	attack();

	private:
		std::string	_name;
		Weapon& _type;
};

# endif
