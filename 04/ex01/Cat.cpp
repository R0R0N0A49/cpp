#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_ideas = new Brain();
	std::cout << CatColor << "Cat constructor called\n" << Reset;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	this->_type = copy.getType();
	this->_ideas = new Brain(*copy._ideas);
	std::cout << CatColor << "Cat copy constructor called\n" << Reset;
}

Cat& Cat::operator=(Cat const& other)
{
	if (this != &other) {
		this->_type = other.getType();
		*this->_ideas = *other._ideas;
		std::cout << CatCopyColor << "Cat copy operator called\n" << Reset;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_ideas;
	std::cout << CatColor << "Cat destructor called\n" << Reset;
}

void Cat::makeSound() const
{
	std::cout << "Cat say : Miaow" << std::endl;
}

void Cat::setString(int i, std::string src)
{
	this->_ideas->setString(i, src);
}


void Cat::printAll() const
{
	this->_ideas->printAll();
}

