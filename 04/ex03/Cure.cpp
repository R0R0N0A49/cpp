#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "default Cure constructor called\n";
}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	std::cout << "copy Cure constructor called\n";
}

Cure& Cure::operator=(Cure const& other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "destructor Cure destructor called\n";
}

Cure& Cure::Clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.gatName() << "’s wounds *\n";
}

