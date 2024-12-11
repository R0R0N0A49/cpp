#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guarding_gate = false;
	std::cout << "default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap " + name + " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
	this->_guarding_gate = cpy._guarding_gate;
	std::cout << "copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::guardGate()
{
	if (!this->_guarding_gate)
	{
		this->_guarding_gate = true;
		std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << this->_name << " is already in Gate keeper mode" << std::endl;
}
