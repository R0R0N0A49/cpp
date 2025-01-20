#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(Dog const & other);
		~Dog();

	public:
		void makeSound(void) const;
		void printAll() const;
		void setString(int, std::string);

	private:
		Brain* _ideas;
};
