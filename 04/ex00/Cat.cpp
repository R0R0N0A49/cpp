#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->_type = "Cat";
	std::cout << CatColor << "Cat constructor called\n" << Reset;
}

Cat::Cat(Cat const &copy)  : Animal(copy) {
	this->_type = copy.getType();
	std::cout << CatColor << "Cat copy constructor called\n" << Reset;
}

Cat& Cat::operator=(Cat const &other) {
	this->_type = other.getType();
	std::cout << CatColor << "Cat operator called\n" << Reset;
	return *this;
}

Cat::~Cat() {
	std::cout << CatColor << "Cat destructor called\n" << Reset;
}

void Cat::makeSound() const {
	std::cout << "Cat say : Miaow" << std::endl;
}
