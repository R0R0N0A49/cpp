#pragma once

#include "ScavTrap.hpp"
#define G "\033[1;38;2;100;200;100m"
#define R "\033[1;38;2;250;100;100m"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &cpy);
		FragTrap& operator=(FragTrap const& cpy);
		~FragTrap();

		void highFivesGuys(void);
};