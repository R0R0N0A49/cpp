#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	std::cout << DogColor << "Dog constructor called\n" << Reset;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	this->_type = copy.getType();
	std::cout << DogColor << "Dog copy constructor called\n" << Reset;
}

Dog& Dog::operator=(Dog const &other) {
	this->_type = other.getType();
	std::cout << DogColor << "Dog operator called\n" << Reset;
	return *this;
}

Dog::~Dog() {
	std::cout << DogColor << "Dog destructor called\n" << Reset;
}

void Dog::makeSound() const {
	std::cout << "Dog goes Woof" << std::endl;
}
