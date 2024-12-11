#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& cpy);
		~ScavTrap();

	public:
		void guardGate();
};
