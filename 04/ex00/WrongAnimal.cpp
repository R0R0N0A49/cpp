#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->_type = "NULL";
	std::cout << WrongAnimalColor << "WrongAnimal constructor called\n" << Reset;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	this->_type = copy.getType();
	std::cout << WrongAnimalColor << "WrongAnimal copy constructor called\n" << Reset;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->_type = type;
	std::cout << WrongAnimalColor << "WrongAnimal type constructor called\n" << Reset;
}

WrongAnimal::~WrongAnimal() {
	std::cout << WrongAnimalColor << "WrongAnimal destructor called\n" << Reset;
}

WrongAnimal WrongAnimal::operator=(WrongAnimal &other) {
	this->_type = other.getType();
	std::cout << WrongAnimalColor << "WrongAnimal operator called\n" << Reset;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::makeSound() const {
	std::cout << "**simple WrongAnimal sound**" << std::endl;
}
