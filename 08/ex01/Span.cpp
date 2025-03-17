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

	unsigned int save;

}