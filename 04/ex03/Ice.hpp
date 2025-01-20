#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#define IceColor "\033[1;38;2;0;150;195m" // Blue

class ICharacter;

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(Ice const & other);
		~Ice();

	public:
		Ice* clone() const;
		void use(ICharacter& target);
};
