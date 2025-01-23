#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BrainColor << "Brain constructor called\n" << Reset;
}

Brain::Brain(Brain & copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << BrainColor << "Brain copy constructor called\n" << Reset;
}

Brain::~Brain()
{
	std::cout << BrainColor << "Brain destructor called\n" << Reset;
}

Brain &Brain::operator=(Brain const & other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << BrainCopyColor << "Brain copy operator called\n" << Reset;
	return (*this);
}

void Brain::setString(int i, std::string copy)
{
	if (i >= 0 && i <= 99)
		this->_ideas[i] = copy;
}

void Brain::printAll() const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].size())
			std::cout << "Line[" << i << "] = " << this->_ideas[i] << std::endl;
	}
}

void Brain::setNew(Brain const& other)
{
	*this = other;
}
