#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("BOB");
	ClapTrap tmp("jo");
	ClapTrap clapTrap2("ClapTrap");

	for (int i = 0; i < 15 ; i++)
	{
		std::cout << "\033[1;35m";
		clapTrap.attack("ClapTrap");
		std::cout << "\033[1;32m";
		clapTrap2.beRepaired(0);
		std::cout << "\033[1;36m";
		tmp.takeDamage(1);
	}
	std::cout << "\033[1;m";
	return 0;
}