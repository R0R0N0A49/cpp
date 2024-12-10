#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << WrongCatColor << "WrongCat constructor called\n" << Reset;
}

WrongCat::WrongCat(const WrongCat &copy) {
	this->_type = copy.getType();
	std::cout << WrongCatColor << "WrongCat copy constructor called\n" << Reset;
}

WrongCat WrongCat::operator=(WrongCat &other) {
	this->_type = other.getType();
	std::cout << WrongCatColor << "WrongCat operator called\n" << Reset;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << WrongCatColor << "WrongCat destructor called\n" << Reset;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat say : Miaow" << std::endl;
}
