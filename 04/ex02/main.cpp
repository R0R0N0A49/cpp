#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Cat* cat = new Cat();
	Dog* dog = new Dog();
//	Animal* animal = new Animal();

	cat->makeSound();
	dog->makeSound();
//	animal->makeSound();

	delete cat;
	delete dog;
//	delete animal
	return 0;
}
