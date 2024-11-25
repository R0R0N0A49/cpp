

#include "Fixed.hpp"

Fixed::Fixed()
{
	Fixed::rawbits = 0;
}

Fixed::Fixed(const Fixed& other)
{
	Fixed::rawbits = other.rawbits;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	Fixed::rawbits = other.rawbits;
	return *this;
}

int Fixed::getRawBits() const
{
	return (rawbits);
}
