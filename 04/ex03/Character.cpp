#include "Character.hpp"

Character::Character() : ICharacter() {
	std::cout << CharacterColor << "Character default constructor called\n";
}

Character::Character(std::string name) : ICharacter(name) {
	std::cout << CharacterColor << "Character name constructor called\n" << reset;
}

Character::Character(const Character &other) : ICharacter(other) {
	std::cout << CharacterColor << "Character copy constructor called\n" << reset;
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		*this = other;
	}
	return (*this);
}

Character::~Character() {
	std::cout << CharacterColor << "Character destructor called\n" << reset;
}

const std::string &Character::getName() const {
	return (this->_name);
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && idx >= 0 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cerr << CharacterColor << "Error\nBad index passed to ICharacter " << this->_name << " use()" << std::endl << reset;
}

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0)
		this->_inventory[idx] = NULL;
	else
		std::cerr << CharacterColor << "Error\nBad index passed to ICharacter " << this->_name << "unequip\n" << reset;
}

void Character::equip(AMateria *m) {
	if (this->_idx == 4)
		std::cerr << CharacterColor << "Error\n" << this->_name << "Inventory is full\n" << reset;
	else
		this->_inventory[_idx++] = m;
}
