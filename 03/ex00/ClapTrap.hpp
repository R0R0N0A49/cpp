#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &cpy);
		~ClapTrap();

	public:
		ClapTrap &operator=(ClapTrap const &cpy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
