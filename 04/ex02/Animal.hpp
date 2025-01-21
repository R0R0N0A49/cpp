#pragma once
#include <iostream>
#include "Brain.hpp"

#define Reset "\033[1;m"
#define CatColor "\033[1;33m"
#define CatCopyColor "\033[1;34m"
#define DogColor "\033[1;32m"
#define DogCopyColor "\033[1;31m"
#define AnimalColor "\033[1;35m"
#define BrainColor "\033[1;38;2;50;100;200m"
#define BrainCopyColor "\033[1;38;2;100;50;200m"

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const& copy);
		Animal &operator=(Animal& other);
		virtual ~Animal();

	public:
		std::string getType() const;
		virtual void makeSound(void) const = 0;

	protected:
		std::string	_type;
};
