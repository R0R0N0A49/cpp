#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << CureColor << "default Cure constructor called\n" << reset;
}

Cure::Cure(const Cure& other) : AMateria(other.getType())
{
	std::cout << CureColor << "copy Cure constructor called\n" << reset;
}

Cure& Cure::operator=(Cure const& other)
{
	if (this->getType() != other.getType())
		this->_type = other._type;
	return *this;
}

Cure::~Cure() {
	std::cout << CureColor << "Cure destructor called\n" << reset;
}

Cure* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << CureColor << "* heals "<< target.getName() << "’s wounds *\n" << reset;
}

