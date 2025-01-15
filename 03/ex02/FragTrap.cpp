#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_name = "default";
	this->_attack = 30;
	this->_energyPoint = 100;
	this->_hitPoint = 100;
	this->_maxHeal = 100;
	std::cout << G << "FragTrap Default constructor called" << Reset;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_attack = 30;
	this->_energyPoint = 100;
	this->_hitPoint = 100;
	this->_maxHeal = 100;
	std::cout << G << "FragTrap name constructor called\n" << Reset;
}

FragTrap::FragTrap(FragTrap &cpy) : ClapTrap(cpy._name) {
	this->_attack = cpy._attack;
	this->_energyPoint = cpy._energyPoint;
	this->_hitPoint = cpy._hitPoint;
	this->_maxHeal = cpy._maxHeal;
	std::cout << G << "FragTrap copy constructor called\n" << Reset;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy) {
	if (this != &cpy) {
		this->_name = cpy._name;
		this->_attack = cpy._attack;
		this->_energyPoint = cpy._energyPoint;
		this->_hitPoint = cpy._hitPoint;
		this->_maxHeal = cpy._maxHeal;
	}
	return (*this);
}
FragTrap::~FragTrap() {
	std::cout << R << "FragTrap destructor called\n" << Reset;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " want highFives\n";
}
