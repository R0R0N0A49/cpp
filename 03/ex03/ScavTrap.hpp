#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();

	public:
		void guardGate();
		ScavTrap& operator=(const ScavTrap& cpy);

	private:
		bool _guarding_gate;
};
