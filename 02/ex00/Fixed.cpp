#include "Fixed.hpp"

Fixed::Fixed() {
	this->_rawbits = 0;
}

Fixed::Fixed(const Fixed& other) {
	this->_rawbits = other._rawbits;
}

Fixed::~Fixed(){
}

Fixed& Fixed::operator=(const Fixed& other) {
	this->_rawbits = other._rawbits;
	return *this;
}

int Fixed::getRawBits() const {
	return (_rawbits);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}