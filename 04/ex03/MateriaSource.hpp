#pragma once

#include "IMateriaSource.hpp"
#define MSColor "\033[1;38;2;250;0;105m"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria*	_stock[4];
		AMateria*	_unequip[1024];
		int 		_idx;


	public:
		MateriaSource();
		MateriaSource(MateriaSource const& other);
		MateriaSource& operator=(MateriaSource const &other);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};