#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	// creation des save AMateria
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// creation des Character
	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	ICharacter* kevin = new Character("kevin");
	std::cout << std::endl;
	AMateria* tmp;
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	std::cout << std::endl;
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << std::endl;
	bob->equip(tmp);

	tmp = src->createMateria("cure");
	std::cout << std::endl;
	kevin->equip(tmp);
	tmp = src->createMateria("ice");
	std::cout << std::endl;
	kevin->equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;

	// test ICharacter
	bob->use(0, *kevin);
	std::cout << std::endl;

	bob->unequip(0);
	std::cout << std::endl;

	kevin->use(1, *bob);
	std::cout << std::endl;

	kevin->unequip(1);
	std::cout << std::endl;

	kevin->use(0, *kevin);
	std::cout << std::endl;

	bob->use(1, *bob);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	// delete
	delete bob;
	std::cout << std::endl;
	delete kevin;
	std::cout << std::endl;
	delete src;
	return 0;
}