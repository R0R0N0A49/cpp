#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_name = "DefaultST";
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << "FragTrap name constructor called\n";
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy) {
	this->_name = cpy._name;
	this->_attackDamage = cpy._attackDamage;
	this->_energyPoints = cpy._energyPoints;
	this->_hitPoints = cpy._hitPoints;
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys() const {
	std::cout << this->_name << " want high fives" << std::endl;
}
