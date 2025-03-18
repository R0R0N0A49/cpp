#include "Span.hpp"

Span::Span() : _N(0) {
}

Span::Span(unsigned int N) : _N(N) {

}

Span::Span(Span & cpy) : _N(cpy._N) {
	std::list<unsigned int>::iterator it;

	for (it = cpy._list.begin(); it != cpy._list.end(); it++)
		_list.push_back(*it);
}

Span &Span::operator=(Span cpy) {
	const_cast<unsigned int&>(this->_N) = cpy._N;
	std::list<unsigned int>::iterator it;

	for (it = cpy._list.begin(); it != cpy._list.end(); it++)
		_list.push_back(*it);
	return *this;
}

Span::~Span() {
}

void Span::addNumber(unsigned int i) {
	if (_list.size() < _N)
		_list.push_back(i);
	else
		throw FullException();
}

void Span::addNumber(std::list<unsigned int> i) {
	std::list<unsigned int>::iterator it;

	for (it = i.begin(); it != i.end(); it++)
	{
		if (_list.size() >= _N)
			throw FullException();
		_list.push_back(*it);
	}
}

unsigned int Span::shortestSpan() {
	if (_list.size() < 2)
		throw NoNumbersException();

	long save = -1;
	std::list<unsigned int>::iterator base = _list.begin();

	for (; base != _list.end(); base++)
	{
		std::list<unsigned int>::iterator it = base;
		++it;
		for (; it != _list.end(); it++)
		{
			unsigned int d = (*base > *it) ? (*base - *it) : *it - *base;
			if (d < save)
				save = d;
			else if (save == -1)
				save = d;
		}
	}
	return save;
}

unsigned int Span::longestSpan() {
	if (_list.size() < 2)
		throw NoNumbersException();

	long save = -1;
	std::list<unsigned int>::iterator base = _list.begin();

	for (; base != _list.end(); base++)
	{
		std::list<unsigned int>::iterator it = base;
		++it;
		for (; it != _list.end(); it++)
		{
			unsigned int d = (*base > *it) ? (*base - *it) : *it - *base;
			if (d > save)
				save = d;
			else if (save == -1)
				save = d;
		}
	}
	return save;
}
