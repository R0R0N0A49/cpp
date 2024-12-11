#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	DiamondTrap bob("bob");
	DiamondTrap lenon(bob);
	// DiamondTrap wtf();

	bob.printValue();
	lenon.printValue();
	// wtf.printValue();
	return 0;
}
