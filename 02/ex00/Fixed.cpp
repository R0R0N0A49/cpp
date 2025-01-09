#include "Fixed.hpp"

Fixed::Fixed() : constvalus(8) {
	this->rawbits = 0;
}

Fixed::Fixed(const Fixed& other) {
	this->constvalus = 8;
	this->rawbits = other.rawbits;
}

Fixed::~Fixed(){
}

Fixed& Fixed::operator=(const Fixed& other) {
	this->rawbits = other.rawbits;
	return *this;
}

int Fixed::getRawBits() const {
	return (rawbits);
}
