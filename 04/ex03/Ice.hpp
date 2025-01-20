#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(Ice const & other);
		~Ice();

	public:
		Ice& Clone() const;
		void use(ICharacter& target);
};
