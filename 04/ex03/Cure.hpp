#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	Cure& operator=(Cure const & other);
	~Cure();

public:
	Cure& Clone() const;
	void use(ICharacter& target);
};
