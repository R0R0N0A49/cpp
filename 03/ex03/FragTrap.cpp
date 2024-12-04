#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->initVar(100, 100, 30);
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.getName())
{
	this->initVar(100, 100, 30);
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() const {
	std::cout << this->getName() << " want high fives" << std::endl;
}
