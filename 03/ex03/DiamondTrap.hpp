#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
	void	printValue();

	virtual ~DiamondTrap();

	private:
		std::string _name;

};
