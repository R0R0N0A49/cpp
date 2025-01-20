#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& copy);
		Cat& operator=(Cat const &other);
		~Cat();

	public:
		void makeSound(void) const;
};
