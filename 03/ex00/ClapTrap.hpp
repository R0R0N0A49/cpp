#pragma once

#include "iostream"

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &src);
		ClapTrap& operator=(ClapTrap const& src);
		~ClapTrap();

	public :
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::ostream & info(std::ostream & o) const;

	private :
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attack;
		unsigned int	_maxHeal;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & src);