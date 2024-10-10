#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	Fixed::rawbits = 0;
}

Fixed::Fixed(const int& value)
{
	setRawBits(value << Fixed::constvalus);
}

Fixed::Fixed(const float& value)
{
	setRawBits((int)roundf(value * (1 << this->constvalus)));
}

Fixed::~Fixed()
{
}

float Fixed::toFloat() const
{
	return ((float)getRawBits() / (1 << Fixed::constvalus));
}

int Fixed::toInt() const
{
	return (getRawBits() >> Fixed::constvalus);
}

Fixed::Fixed(const Fixed& other)
{
	Fixed::rawbits = other.rawbits;
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
