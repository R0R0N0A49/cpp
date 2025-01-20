#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	Ice* ice = new Ice();
	std::cout << std::endl;
	Cure* cure = new Cure();
	std::cout << std::endl;
	ICharacter* me = new Character("me");
	std::cout << std::endl;
	me->equip(ice);
	std::cout << std::endl;
	me->equip(cure);
	std::cout << std::endl;
	ICharacter * you = new Character("you");
	std::cout << std::endl;
	me->use(0, *you);
	std::cout << std::endl;
	me->use(1, *you);
	std::cout << std::endl;
//	delete ice;
//	std::cout << std::endl;
//	delete cure;
//	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete you;
}