#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_name = "DefaultST";
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	std::cout << "ScavTrap name constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap& cpy) : ClapTrap(cpy) {
	this->_name = cpy._name;
	this->_attackDamage = cpy._attackDamage;
	this->_energyPoints = cpy._energyPoints;
	this->_hitPoints = cpy._hitPoints;
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}
