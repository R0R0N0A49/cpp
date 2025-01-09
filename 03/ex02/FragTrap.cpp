#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_name = "default";
	this->_attack = 30;
	this->_energyPoint = 100;
	this->_hitPoint = 100;
	this->_maxHeal = 100;
	std::cout << "FragTrap Default constructor called";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_attack = 30;
	this->_energyPoint = 100;
	this->_hitPoint = 100;
	this->_maxHeal = 100;
	std::cout << "FragTrap name constructor called\n";
}

FragTrap::FragTrap(FragTrap &cpy) : ClapTrap(cpy._name) {
	this->_attack = cpy._attack;
	this->_energyPoint = cpy._energyPoint;
	this->_hitPoint = cpy._hitPoint;
	this->_maxHeal = cpy._maxHeal;
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &cpy) {
	this->_name = cpy._name;
	this->_attack = cpy._attack;
	this->_energyPoint = cpy._energyPoint;
	this->_hitPoint = cpy._hitPoint;
	this->_maxHeal = cpy._maxHeal;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " want highFives\n";
}
