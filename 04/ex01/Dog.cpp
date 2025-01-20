#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	this->_ideas = new Brain();
	std::cout << DogColor << "Dog constructor called\n" << Reset;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
		this->_type = copy.getType();
		this->_ideas = new Brain(*copy._ideas);
		std::cout << DogColor << "Dog copy constructor called\n" << Reset;
}

Dog& Dog::operator=(Dog const &other) {
	if (this != &other) {
		this->_type = other.getType();
		*this->_ideas = *other._ideas;
		std::cout << DogCopyColor << "Dog copy operator called\n" << Reset;
	}
	return *this;
}

Dog::~Dog() {
	delete this->_ideas;
	std::cout << DogColor << "Dog destructor called\n" << Reset;
}

void Dog::makeSound() const {
	std::cout << "Dog say : Woof" << std::endl;
}

void Dog::printAll() const
{
	this->_ideas->printAll();
}

void Dog::setString(int i, std::string src)
{
	this->_ideas->setString(i, src);
}

