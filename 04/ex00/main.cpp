#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* w = new WrongCat();

	std::cout << std::endl;
	std::cout << "j.type = " << j->getType() << std::endl;
	std::cout << "i.type = " << i->getType() << std::endl;
	std::cout << "k.type = " << k->getType() << "\n" << std::endl;
	std::cout << "w.type = " << w->getType() << "\n" << std::endl;

	i->makeSound(); // will output the Cat sound!
	j->makeSound(); // will output the Dog sound
	meta->makeSound(); // will output the Animal sound
	k->makeSound(); // will output the WrongAnimal sound
	w->makeSound(); // will output the WrongCat sound
	std::cout << std::endl;

	const Animal* l = j;
	std::cout << "l.type = " << l->getType() << " " << std::endl;
	l->makeSound();
	std::cout << std::endl;
	delete(i);
	delete(j);
	delete(meta);
	delete(k);
	delete(w);
	return 0;
}
