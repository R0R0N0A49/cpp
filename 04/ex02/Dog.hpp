#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		~Dog();

	public:
		void makeSound(void) const;
		void setString(int, std::string);
		void printAll();

	private:
		Brain* _idea;
};
