
#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& cpy);
		~ScavTrap();

	public:
		void guardGate();
};

#endif