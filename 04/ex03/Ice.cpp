#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << IceColor << "default Ice constructor called\n" << reset;
}

Ice::Ice(const Ice& other) : AMateria(other.getType())
{
	std::cout << IceColor << "copy Ice constructor called\n" << reset;
}

Ice& Ice::operator=(Ice const& other)
{
	if (this->getType() != other.getType())
		this->_type = other._type;
	return *this;
}

Ice::~Ice() {
	std::cout << IceColor << "Ice destructor called\n" << reset;
}

Ice *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << IceColor << "* shoots an ice bolt at " << target.getName() << " *\n" << reset;
}

