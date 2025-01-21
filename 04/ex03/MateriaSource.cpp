#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4 ; i++)
		this->_stock[i] = NULL;
	this->_idx = 0;
	std::cout << MSColor << "MateriaSource default constructor called\n" << reset;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4 ; i++)
		this->_stock[i] = NULL;
	this->_idx = 0;
	std::cout << MSColor << "MateriaSource name constructor called\n" << reset;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (this->_stock[i])
				delete this->_stock[i];
			this->_stock[i] = other._stock[i];
		}
		for (int i = 0; i < this->_idx; i++) {
			if (this->_unequip[i])
				delete this->_unequip[i];
			this->_unequip[i] = other._unequip[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_stock[i])
			delete this->_stock[i];
	}
	for (int i = 0; i < this->_idx; i++) {
		if (this->_unequip[i])
			delete this->_unequip[i];
	}
	std::cout << MSColor << "MateriaSource destructor called\n" << reset;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	int i;

	for (i = 0; i < 4 && this->_stock[i]->getType() != type; i++)
		;
	if (i < 4)
		return this->_stock[i]->clone();
	return NULL;
}

void MateriaSource::learnMateria(AMateria *other) {
	int i;

	for (i = 0; i < 4 && this->_stock[i]; i++)
		;
	if (i == 4) {
		this->_unequip[this->_idx++] = other;
		std::cout << MSColor << "MateriaSource is full\n" << reset;
		return;
	}
	this->_stock[i] = other;
}
