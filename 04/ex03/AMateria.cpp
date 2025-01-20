#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "Default";
	std::cout << MateriaColor << "AMateria default constructor called\n";
}

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
	std::cout << MateriaColor << "AMateria constructor called\n" << reset;
}

AMateria::AMateria(AMateria const& other)
{
	this->_type = other._type;
	std::cout << MateriaColor << "AMateria copy constructor called\n" << reset;
}

AMateria& AMateria::operator=(AMateria const& other)
{
	this->_type = other._type;
	std::cout << MateriaColor << "AMateria assignment operator called\n" << reset;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << MateriaColor << "AMateria destructor called\n" << reset;
}

std::string const& AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << MateriaColor << "AMateria attack with no type " << target.getName() << std::endl << reset;
}

