#include "Animal.hpp"

Animal::Animal() {
	this->_type = "NULL";
	std::cout << AnimalColor << "Animal constructor called\n" << Reset;
}

Animal::Animal(Animal &copy) {
	this->_type = copy.getType();
	std::cout << AnimalColor << "Animal copy constructor called\n" << Reset;
}

Animal::Animal(std::string type) {
	this->_type = type;
	std::cout << AnimalColor << "Animal type constructor called\n" << Reset;
}

Animal::~Animal() {
	std::cout << AnimalColor << "Animal destructor called\n" << Reset;
}

Animal &Animal::operator=(Animal &other) {
	this->_type = other.getType();
	std::cout << AnimalColor << "Animal operator called\n" << Reset;
	return (*this);
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	std::cout << "**simple animal sound**" << std::endl;
}
