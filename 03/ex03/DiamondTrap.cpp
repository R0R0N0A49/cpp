#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_trap")
{
	this->_name = "Default";
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_hitPoints = FragTrap::_hitPoints;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << "diamondTrap " << name << " as be created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	this->_name = other._name;
	std::cout << "diamondTrap copy constructor called" << std::endl;
}

void DiamondTrap::printValue()
{
	std::cout << this->_name << std::endl << this->_attackDamage  << std::endl << this->_energyPoints << std::endl << this->_hitPoints << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "diamondTrap destructor called" << std::endl;
}

