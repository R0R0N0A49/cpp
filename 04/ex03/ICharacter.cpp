#include "ICharacter.hpp"

ICharacter::ICharacter() {
	this->_name = "default";
	this->_idx = 0;
	std::cout << ICharacterColor << "ICharacter default constructor called\n";
}

ICharacter::ICharacter(std::string &name) {
	this->_name = name;
	this->_idx = 0;
	std::cout << ICharacterColor << "ICharacter name constructor called\n";
}

ICharacter::ICharacter(const ICharacter &other) {
	*this = other;
	std::cout << ICharacterColor << "ICharacter copy constructor called\n";
}

ICharacter::~ICharacter() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << ICharacterColor << "ICharacter destructor called\n";
}

ICharacter& ICharacter::operator=(const ICharacter &other) {
	if (this != &other)
	{
		this->_idx = other._idx;
		this->_name = other._name;
		this->_inventory[0] = other._inventory[0];
		this->_inventory[1] = other._inventory[1];
		this->_inventory[2] = other._inventory[2];
		this->_inventory[3] = other._inventory[3];
	}
	return *this;
}

void ICharacter::use(int idx, ICharacter &target) {
	if (idx < 4 && idx >= 0 && this->_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cerr << ICharacterColor << "Error\nBad index passed to ICharacter " << this->_name << " use()" << std::endl;
}

std::string const& ICharacter::getName() const {
	return this->_name;
}

void ICharacter::equip(AMateria *m) {
	if (this->_idx == 4)
		std::cerr << ICharacterColor << "Error\n" << this->_name << "Inventory is full\n";
	else
		this->_inventory[_idx++] = m;
}

void ICharacter::unequip(int idx) {
	if (idx < 4 && idx >= 0)
		this->_inventory[idx] = NULL;
	else
		std::cerr << ICharacterColor << "Error\nBad index passed to ICharacter " << this->_name << "unequip\n";
}
