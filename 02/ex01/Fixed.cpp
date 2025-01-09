#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : constvalus(8) {
	Fixed::rawbits = 0;
}

Fixed::Fixed(const int& value) : constvalus(8) {
	setRawBits(value << Fixed::constvalus);
}

Fixed::Fixed(const float& value) : constvalus(8) {
	setRawBits((int)roundf(value * (1 << this->constvalus)));
}

Fixed::Fixed(const Fixed& other) : constvalus(8) {
	Fixed::rawbits = other.rawbits;
}

Fixed::~Fixed(){
}

float Fixed::toFloat() const
{
	return ((float)getRawBits() / (1 << Fixed::constvalus));
}

int Fixed::toInt() const
{
	return (getRawBits() >> Fixed::constvalus);
}

std::ostream& operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	setRawBits(other.getRawBits());
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	Fixed::rawbits = raw;
}

int Fixed::getRawBits() const
{
	return (rawbits);
}
