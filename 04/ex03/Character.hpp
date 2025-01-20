#pragma once

#include "ICharacter.hpp"
#define CharacterColor "\033[1;38;2;100;85;150m" // purple

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const& other);
		~Character();
		Character& operator=(Character const& other);

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};