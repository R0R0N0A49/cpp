#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << DogColor << "Dog constructor called\n" << Reset;
}

Dog::Dog(const Dog &copy) {
	this->_type = copy.getType();
	std::cout << DogColor << "Dog copy constructor called\n" << Reset;
}

Dog Dog::operator=(Dog &other) {
	this->_type = other.getType();
	std::cout << DogColor << "Dog operator called\n" << Reset;
	return *this;
}

Dog::~Dog() {
	std::cout << DogColor << "Dog destructor called\n" << Reset;
}

void Dog::makeSound() const {
	std::cout << "Dog say : Woof" << std::endl;
}
