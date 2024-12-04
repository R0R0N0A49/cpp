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
		std::string getName() const;
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	printName() const;
		void	initVar(int HP, int MP, int ATK);

	private:
		std::string _name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
