#include "ClapTrap.hpp"

#include <string>

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_attackDamage = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	std::cout << "the ClapTrap " << name << " is create\n";
}

ClapTrap::ClapTrap(ClapTrap const& cpy)
{
	this->_name = cpy._name;
	this->_attackDamage = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	std::cout << "the ClapTrap " << cpy._name << " is duplicate\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "the ClapTrap " << this->_name << " is destroy\n";
}

void	ClapTrap::initVar(int HP, int MP, int ATK)
{
	this->_hitPoints = HP;
	this->_energyPoints = MP;
	this->_attackDamage = ATK;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& cpy)
{
	this->_name = cpy._name;
	this->_attackDamage = cpy._attackDamage;
	this->_energyPoints = cpy._energyPoints;
	this->_hitPoints = cpy._hitPoints;
	std::cout << "the ClapTrap " << this->_name << " is copy\n";
	return *this;
}

static void outEnergy(std::string src, std::string &name)
{
	std::cout << name << " does not have enough energy for " << src << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints)
	{
		std::cout << this->_name << " attack " << target << std::endl;
		std::cout << target << " lose " << this->_attackDamage << " hit point" << std::endl;
		this->_energyPoints--;
	}
	else
		outEnergy("attacking", this->_name);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints)
	{
		std::cout << this->_name << " repaired " << amount << " hit point" << std::endl;
		this->_energyPoints--;
	}
	else
		outEnergy("repaired", this->_name);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints)
	{
		std::cout << this->_name << " takes " << amount << " hit point" <<std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << this->_name << " is dead" << std::endl;
}

void ClapTrap::printName() const
{
	std::cout << this->_name;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

