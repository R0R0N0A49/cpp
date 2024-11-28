#include "Point.hpp"

// Aire=1/2 * abs(x1 * (y2−y3)+ x2 * (y3−y1)+ x3 * (y1−y2))

int main( void ) {
	Point point;
	Point point2(24, 5);
	Point tmp(0, 24);
	Point point3(tmp);

	std::cout << "point = ";
	point.printValue();
	std::cout << "point2 = ";
	point2.printValue();
	point = point2;
	std::cout << "point = ";
	point.printValue();
	std::cout << "point3 = ";
	point3.printValue();
	return 0;
}
