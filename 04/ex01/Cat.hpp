#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const& copy);
		Cat& operator=(Cat const &other);
		~Cat();
		void makeSound(void) const;
		void printAll() const;
		void setString(int, std::string);

	private:
		Brain* _ideas;
};
