#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "default Ice constructor called\n";
}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	std::cout << "copy Ice constructor called\n";
}

Ice& Ice::operator=(Ice const& other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Ice::~Ice()
{
	std::cout << "destructor Ice destructor called\n";
}

Ice& Ice::Clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << target.getName() << "*\n";
}

