#pragma once

#include "iostream"
#define Reset "\033[1;m"
#define Blue "\033[1;38;2;0;100;150m"
#define Red "\033[1;38;2;150;0;100m"

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &src);
		ClapTrap& operator=(ClapTrap const& src);
		virtual ~ClapTrap();

	public :
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::ostream & info(std::ostream & o) const;

	protected:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attack;
		unsigned int	_maxHeal;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & src);