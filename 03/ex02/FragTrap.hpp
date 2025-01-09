#pragma once

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &cpy);
		FragTrap& operator=(FragTrap const& cpy);
		~FragTrap();

		void highFivesGuys(void);
};