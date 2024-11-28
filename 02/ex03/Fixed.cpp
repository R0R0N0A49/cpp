#include "Fixed.hpp"
#include <math.h>

/************************* Constructor  Destructor *************************/

Fixed::Fixed() {
	Fixed::rawbits = 0;
}

Fixed::Fixed(const int& value) {
	setRawBits((int)roundf(value * (1 << this->constvalus)));
}

Fixed::Fixed(const float& value) {
	setRawBits((int)roundf(value * (1 << this->constvalus)));
}

Fixed::~Fixed(){
}

/******************************** Function ********************************/

float Fixed::toFloat() const {
	return ((float)getRawBits() / (1 << Fixed::constvalus));
}

int Fixed::toInt() const {
	return (getRawBits() >> Fixed::constvalus);
}

Fixed::Fixed(const Fixed& other) {
	Fixed::rawbits = other.rawbits;
}

void Fixed::setRawBits(int const raw) {
	Fixed::rawbits = raw;
}

int Fixed::getRawBits() const {
	return (rawbits);
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
	if (Fixed::toFloat() == other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const {
	if (Fixed::toFloat() != other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) const {
	if (Fixed::toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) const {
	if (Fixed::toFloat() <= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& other) const {
	if (Fixed::toFloat() > other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other) const {
	if (Fixed::toFloat() < other.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((int)roundf((this->toFloat() + \
		other.toFloat()) * (float)(1 << this->constvalus)));
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((int)roundf((this->toFloat() - \
		other.toFloat()) * (float)(1 << this->constvalus)));
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((int)roundf((this->toFloat() * \
		other.toFloat()) * (float)(1 << this->constvalus)));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed tmp;
	tmp.setRawBits((int)roundf((this->toFloat() / \
		other.toFloat()) * (float)(1 << this->constvalus)));
	return (tmp);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	(this->rawbits)++;
	return (tmp);
}

Fixed& Fixed::operator++() {
	++this->rawbits;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	(this->rawbits)--;
	return (tmp);
}

Fixed& Fixed::operator--() {
	--this->rawbits;
	return (*this);
}
