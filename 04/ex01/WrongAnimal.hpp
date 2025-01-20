#pragma once
#include <iostream>

#define Reset "\033[1;m"
#define WrongAnimalColor "\033[1;36m"
#define WrongCatColor "\033[1;31m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & copy);
	WrongAnimal operator=(WrongAnimal& other);
	virtual ~WrongAnimal();

public:
	std::string getType() const;
	void makeSound(void) const;

protected:
	std::string	_type;
};