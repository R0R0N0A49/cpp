#pragma once

#include <iostream>
#include "ICharacter.hpp"
#define reset "\033[1;m" // white
#define MateriaColor "\033[1;38;2;195;150;0m" // gold

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & other);

	public:
		AMateria& operator=(AMateria const & other);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};