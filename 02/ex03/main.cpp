#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(0, 0);
	Point b(6, 0);
	Point c(3, 6);
	Point point(3, 2);

	if (bsp(a, b, c, point))
		std::cout << "is in\n";
	else
		std::cout << "is out\n";
	return 0;
}
