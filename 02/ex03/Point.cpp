#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
}

Point::Point(const float x, const float y): _x(x), _y(y) {
}

Point::Point(const Point &src) {
	*this = src;
}
Point::~Point() {
}

Point &Point::operator=(const Point &src) {
	const_cast<Fixed&>(this->_x) = src._x;
	const_cast<Fixed&>(this->_y) = src._y;
	return (*this);
}

void	Point::printValue() {
	std::cout << "x = " << this->_x << " y = " << this->_y << std::endl;
}

bool	Point::operator==(const Point &src) const {
	if (this->_x == src._x  && this->_y == src._y)
		return (true);
	return (false);
}

Fixed Point::gx() const {
	return (this->_x);
}

Fixed Point::gy() const {
	return (this->_y);
}
