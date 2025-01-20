#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#define CureColor "\033[1;38;2;0;195;150m" // green

class ICharacter;

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	Cure& operator=(Cure const & other);
	~Cure();

public:
	Cure* clone() const;
	void use(ICharacter& target);
};
