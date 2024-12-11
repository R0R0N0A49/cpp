#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other._name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignation called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage =other._attackDamage;
	return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() const {
	std::cout << this->_name << " want high fives" << std::endl;
}
