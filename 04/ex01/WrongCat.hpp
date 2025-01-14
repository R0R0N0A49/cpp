#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat operator=(WrongCat& other);
	~WrongCat();

public:
	void makeSound(void) const;
};
