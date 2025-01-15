#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() {
	Fixed::_rawbits = 0;
}

Fixed::Fixed(const int& value) {
	setRawBits(value << this->_constvalus);
}

Fixed::Fixed(const float& value) {
	setRawBits((int)roundf(value * (1 << this->_constvalus)));
}

Fixed::Fixed(const Fixed& other) {
	Fixed::_rawbits = other._rawbits;
}

Fixed::~Fixed(){
}

float Fixed::toFloat() const
{
	return ((float)getRawBits() / (1 << this->_constvalus));
}

int Fixed::toInt() const
{
	return (getRawBits() >> this->_constvalus);
}

std::ostream& operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}

int Fixed::getRawBits() const
{
	return (_rawbits);
}
