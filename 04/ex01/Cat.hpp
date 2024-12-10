#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(Cat const& other);
		~Cat();

	public:
		void makeSound(void) const;
		void setString(int, std::string);
		void printAll();

	private:
		Brain* _idea;
};
