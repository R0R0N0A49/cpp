

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

int Fixed::getRawBits() const
{

}
