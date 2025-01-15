#include "Brain.hpp"

Brain::Brain() {
	std::cout << BrainColor << "Brain constructor called\n" << Reset;
}

Brain::Brain(Brain &copy) {
	for (int i = 0; i < 100; i++)
		this->_idea[i] = copy._idea[i];
	std::cout << BrainColor << "Brain copy constructor called\n" << Reset;
}

Brain::~Brain() {
	std::cout << BrainColor << "Brain destructor called\n" << Reset;
}

Brain Brain::operator=(Brain &other) {
	for (int i = 0; i < 100; i++)
		this->_idea[i] = other._idea[i];
	std::cout << BrainColor << "Brain operator called\n" << Reset;
	return (*this);
}

void Brain::setString(int i, std::string copy) {
	this->_idea[i] = copy;
}

void Brain::printAll() {
	for (int i = 0; i < 100; i++)
	{
		if (this->_idea[i].size())
			std::cout << "Line[" << i << "] = " << this->_idea[i];
	}
}
void Brain::setNew(Brain& other) {

	*this = other;
}
