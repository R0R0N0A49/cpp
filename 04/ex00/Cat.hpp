#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		Cat operator=(Cat& other);
		~Cat();

	public:
		void makeSound(void) const;
};
