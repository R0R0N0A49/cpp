#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->initVar(100, 50, 20);
}

ScavTrap::ScavTrap(ScavTrap& cpy) : ClapTrap(cpy.getName())
{
	this->initVar(100, 50, 20);
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::guardGate()
{
	this->printName();
	std::cout << " is now in Gate keeper mode" << std::endl;
}
