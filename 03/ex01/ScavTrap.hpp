#pragma once

#include "ClapTrap.hpp"
#define B "\033[1;38;2;100;100;100m"
#define R "\033[1;38;2;250;0;150m"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& cpy);
		ScavTrap& operator=(ScavTrap const& cpy);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};