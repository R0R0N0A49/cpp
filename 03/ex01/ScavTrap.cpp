#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_name = "Default";
	this->_attack = 20;
	this->_energyPoint = 50;
	this->_hitPoint = 100;
	this->_maxHeal = 100;
	std::cout << B << "ScavTrap default constructor called\n" << Reset;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_attack = 20;
	this->_energyPoint = 50;
	this->_hitPoint = 100;
	this->_maxHeal = 100;
	std::cout << B << "ScavTrap name constructor called\n" << Reset;
}

ScavTrap::ScavTrap(ScavTrap &cpy) : ClapTrap(cpy){
	this->_name = cpy._name;
	this->_attack = cpy._attack;
	this->_energyPoint = cpy._energyPoint;
	this->_hitPoint = cpy._hitPoint;
	this->_maxHeal = cpy._hitPoint;
	std::cout << B << "ScavTrap copy constructor called\n" << Reset;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy) {
	if (this != &cpy) {
		this->_name = cpy._name;
		this->_attack = cpy._attack;
		this->_energyPoint = cpy._energyPoint;
		this->_hitPoint = cpy._hitPoint;
		this->_maxHeal = cpy._hitPoint;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << R << "ScavTrap destructor called\n" << Reset;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_hitPoint > 0 && this->_energyPoint > 0) {
		this->_energyPoint--;
		std::cout << "ScavTrap " << this->_name << " attack ScavTrap " << target << " and does " << this->_attack
				  << " damage !\n";
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack !\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in GuardGate mode\n";
}
