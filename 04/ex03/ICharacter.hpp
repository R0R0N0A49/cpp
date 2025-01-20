#pragma once

#include "AMateria.hpp"
#define ICharacterColor "\033[1;38;2;110;25;175m" // dark purple

class AMateria;

class ICharacter {
	protected:
		std::string _name;
		AMateria* _inventory[4];
		int _idx;

	public:
		ICharacter();
		ICharacter(ICharacter const& other);
		ICharacter(std::string &name);
		virtual ~ICharacter();
		ICharacter& operator=(ICharacter const& other);

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};