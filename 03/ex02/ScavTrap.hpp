#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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