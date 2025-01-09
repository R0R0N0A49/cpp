#include "FragTrap.hpp"

int main(void)
{
	FragTrap derey("Denis");
	std::cout << derey << std::endl;
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	derey.attack("Toma");
	std::cout << derey << std::endl;
	derey.takeDamage(99);
	std::cout << derey << std::endl;
	derey.beRepaired(120);
	std::cout << derey << std::endl;
	derey.attack("Toma");
	derey.highFivesGuys();
	std::cout << std::endl;
	FragTrap trebours("Toma");
	std::cout << trebours << std::endl;
	trebours.takeDamage(9999);
	std::cout << trebours << std::endl;
	trebours.beRepaired(10);
	trebours.attack("Denis");
	std::cout << std::endl;
}
