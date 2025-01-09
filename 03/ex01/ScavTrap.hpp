#pragma once

#include "ClapTrap.hpp"

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