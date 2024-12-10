#pragma once
#include <iostream>
#include "Brain.hpp"

#define Reset "\033[1;m"
#define CatColor "\033[1;33m"
#define DogColor "\033[1;32m"
#define AnimalColor "\033[1;35m"
#define BrainColor "\033[1;38;2;50;100;200m"

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal& copy);
		Animal operator=(Animal& other);
		virtual ~Animal();

	public:
		std::string getType() const;
		virtual void makeSound(void) const;

	protected:
		std::string	_type;
};
