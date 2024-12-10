#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	this->_idea = new Brain();
	std::cout << CatColor << "Cat constructor called\n" << Reset;
}

Cat::Cat(const Cat &copy) {
	this->_type = copy.getType();
	this->_idea = new Brain();
	std::cout << CatColor << "Cat copy constructor called\n" << Reset;
}

Cat& Cat::operator=(Cat const &other) {
	this->_type = other.getType();
	this->_idea->setNew(*other._idea);
	std::cout << DogColor << "Cat operator called\n" << Reset;
	return *this;
}

Cat::~Cat() {
	delete(this->_idea);
	std::cout << CatColor << "Cat destructor called\n" << Reset;
}

void Cat::makeSound() const {
	std::cout << "Cat say : Miaow" << std::endl;
}

void Cat::printAll() {
	this->_idea->printAll();
}

void Cat::setString(int i, std::string copy) {
	this->_idea->setString(i, copy);
}
