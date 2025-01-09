#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap derey("Denis");
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
	derey.takeDamage(9);
	std::cout << derey << std::endl;
	derey.beRepaired(120);
	std::cout << derey << std::endl;
	derey.attack("Toma");
	derey.guardGate();
	std::cout << std::endl;
	ScavTrap trebours("Toma");
	std::cout << trebours << std::endl;
	trebours.takeDamage(9999);
	std::cout << trebours << std::endl;
	trebours.beRepaired(10);
	trebours.attack("Denis");
}
