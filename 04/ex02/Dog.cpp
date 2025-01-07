#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	this->_idea = new Brain();
	std::cout << DogColor << "Dog constructor called\n" << Reset;
}

Dog::Dog(const Dog &copy) {
	this->_type = copy.getType();
	this->_idea = new Brain();
	std::cout << DogColor << "Dog copy constructor called\n" << Reset;
}

Dog& Dog::operator=(Dog const &other) {
	this->_type = other.getType();
	this->_idea->setNew(*other._idea);
	std::cout << DogColor << "Dog operator called\n" << Reset;
	return *this;
}

Dog::~Dog() {
	delete(this->_idea);
	std::cout << DogColor << "Dog destructor called\n" << Reset;
}

void Dog::makeSound() const {
	std::cout << "Dog say : Woof" << std::endl;
}

void Dog::printAll() {
	this->_idea->printAll();
}

void Dog::setString(int i, std::string copy) {
	this->_idea->setString(i, copy);
}
