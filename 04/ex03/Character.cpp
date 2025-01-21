#include "Character.hpp"

Character::Character() {
	this->_index = 0;
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << CharacterColor << "Character default constructor called\n";
}

Character::Character(std::string name) {
	this->_index = 0;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << CharacterColor << "Character name constructor called\n" << reset;
}

Character::Character(const Character &other) {
	this->_index = 0;
	std::cout << CharacterColor << "Character copy constructor called\n" << reset;
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		this->_index = other._index;
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i];
		} for (int i = 0; i < other._index; i++) {
			if (this->_unequip[i])
				delete this->_unequip[i];
			this->_unequip[i] = other._unequip[i];
		}
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < this->_index; i++)
		delete this->_unequip[i];
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << CharacterColor << "Character destructor called\n" << reset;
}

const std::string &Character::getName() const {
	return this->_name;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && idx >= 0 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cerr << CharacterColor << "Error\nBad index passed to Character " << this->_name << ".use()" << std::endl << reset;
}

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0 && this->_inventory[idx]) {
		std::cout << CharacterColor << "* " << this->_name << " drop her " << this->_inventory[idx]->getType() << " *\n";
		this->_unequip[this->_index++] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
	else
		std::cerr << CharacterColor << "Error\nBad index passed to Character " << this->_name << ".unequip\n" << reset;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++){
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return ;
		}
	}
	this->_unequip[this->_index++] = m;
	std::cerr << CharacterColor << "Error\n" << this->_name << "Inventory is full\n" << reset;
}
