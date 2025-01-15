#include "Fixed.hpp"
#include <math.h>

/************************* Constructor  Destructor *************************/

Fixed::Fixed() {
	Fixed::_rawbits = 0;
}

Fixed::Fixed(const int& value) {
	setRawBits(value * (1 << this->_constvalus));
}

Fixed::Fixed(const float& value) {
	setRawBits(roundf(value * (1 << this->_constvalus)));
}

Fixed::Fixed(const Fixed& other) {
	Fixed::_rawbits = other._rawbits;
}

Fixed::~Fixed(){
}

/******************************** Function ********************************/

float Fixed::toFloat() const {
	return ((float)getRawBits() / (1 << Fixed::_constvalus));
}

int Fixed::toInt() const {
	return (getRawBits() >> Fixed::_constvalus);
}

void Fixed::setRawBits(int const raw) {
	Fixed::_rawbits = raw;
}

int Fixed::getRawBits() const {
	return (_rawbits);
}

float Fixed::max(Fixed const &a, Fixed const &b) {
	if (a.toFloat() > b.toFloat())
		return (a.toFloat());
	return (b.toFloat());
}

float Fixed::min(Fixed const &a,Fixed const &b) {
	if (a < b)
		return (a.toFloat());
	return (b.toFloat());
}

float Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a.toFloat());
	return (b.toFloat());
}

float Fixed::min(Fixed &a,Fixed &b) {
	if (a < b)
		return (a.toFloat());
	return (b.toFloat());
}

/*************************** Overload Operators ***************************/

std::ostream& operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}

Fixed& Fixed::operator=(const Fixed& other) {
	Fixed::setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator==(const Fixed& other) const {
	if (this->toFloat() == other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const {
	if (this->toFloat() != other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) const {
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) const {
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& other) const {
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other) const {
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((this->toFloat() + \
		other.toFloat()) * (1 << this->_constvalus));
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((this->toFloat() - \
		other.toFloat()) * (1 << this->_constvalus));
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((this->toFloat() * \
		other.toFloat()) * (1 << this->_constvalus));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((this->toFloat() / \
		other.toFloat()) * (1 << this->_constvalus));
	return (tmp);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	++(this->_rawbits);
	return (tmp);
}

Fixed& Fixed::operator++() {
	this->_rawbits++;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	--(this->_rawbits);
	return (tmp);
}

Fixed& Fixed::operator--() {
	this->_rawbits--;
	return (*this);
}
