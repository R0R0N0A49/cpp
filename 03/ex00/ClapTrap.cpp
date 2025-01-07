#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoint(10), _energyPoint(10), _attack(0), _maxHeal(_hitPoint) {
	std::cout << "default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attack(0), _maxHeal(_hitPoint) {
	std::cout << "clapTrap name constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &src) {
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_maxHeal = src._maxHeal;
	this->_energyPoint = src._energyPoint;
	this->_attack = src._attack;
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap const& src) {
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_maxHeal = src._maxHeal;
	this->_energyPoint = src._energyPoint;
	this->_attack = src._attack;
	std::cout << "ClapTrap operator= called\n";
	return (*this);
}

std::ostream & ClapTrap::info(std::ostream & o) const
{
	o << "\nname        = " << this->_name << "\nHitPoint    = " << this->_hitPoint << "\nEnergyPoint = " << this->_energyPoint << "\nattack      = " << this->_attack << std::endl;
	return (o);
}

std::ostream& operator<< (std::ostream & o, ClapTrap const & src)
{
	return (src.info(o));
}

ClapTrap::~ClapTrap() {
	std::cout << "clapTrap destructor called\n";
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hitPoint > 0 && this->_energyPoint > 0) {
		this->_energyPoint--;
		std::cout << "ClapTrap " << this->_name << " attack ClapTrap " << target << " and does " << this->_attack
				  << " damage !\n";
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack !\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " gets repaired and regains " << amount << " hitPoint !\n";
		this->_energyPoint--;
		if (this->_maxHeal < this->_hitPoint + amount)
			this->_hitPoint = this->_maxHeal;
		else
			this->_hitPoint += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't repaired !\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage !\n";
		if (this->_hitPoint < amount)
			this->_hitPoint = 0;
		else
			this->_hitPoint -= amount;
		if (this->_hitPoint == 0)
			std::cout << "ClapTrap " << this->_name << " is dead !\n";
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead !\n";
}
