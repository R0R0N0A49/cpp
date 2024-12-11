#include "FragTrap.hpp"

int main()
{
	FragTrap clapTrap("BOB");
	FragTrap clapTrap1("jo");
	FragTrap clapTrap2("ClapTrap");

	std::cout << "\033[1;35m";
	clapTrap.attack("ClapTrap");
	std::cout << "\033[1;33m";
	clapTrap.highFivesGuys();
	std::cout << "\033[1;32m";
	clapTrap2.beRepaired(0);
	std::cout << "\033[1;36m";
	clapTrap1.takeDamage(1);
	std::cout << "\033[1;m";
	return 0;
}