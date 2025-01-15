#include "Point.hpp"
#include "cstdlib"
bool bsp( Point const a, Point const b, Point const c, Point const point);

void check(Point &a, Point &b, Point &c, Point &d)
{
	if (bsp(a, b, c, d))
		std::cout << "\033[1;32mis in\n";
	else
		std::cout << "\033[1;31mis out\n";
}

int main(void) {
	Point a(0, 0);
	std::cout << "a" << a << std::endl;
	Point b(40, 10);
	std::cout << "b" << b << std::endl;
	Point c(-20, 60);
	std::cout << "c" << c << std::endl;
	Point d(20, 20);
	std::cout << "d" << d << std::endl;
	Point e(10, 40);
	std::cout << "e" << e << std::endl;

	Point point(20, 10);
	std::cout << "\npoint_1" << point << std::endl;
	Point point2(10, 23);
	std::cout << "point_2" << point2 << std::endl;
	Point point3(-2,10);
	std::cout << "point_3" << point3 << std::endl;

	// 1er Triangle
	std::cout << "\n\033[1;35mTriangle 1 = a b c\n";
	std::cout << "\033[1;34mpoint_1 : ";
	check(a, b, c, point);
	std::cout << "\033[1;34mpoint_2 : ";
	check(a, b, c, point2);
	std::cout << "\033[1;34mpoint_3 : ";
	check(a, b, c, point3);
	// 2eme Triangle
	std::cout << "\n\033[1;35mTriangle 1 = a c e\n";
	std::cout << "\033[1;34mpoint_1 : ";
	check(a, c, e, point);
	std::cout << "\033[1;34mpoint_2 : ";
	check(a, c, e, point2);
	std::cout << "\033[1;34mpoint_3 : ";
	check(a, c, e, point3);
	// 3eme triangle
	std::cout << "\n\033[1;35mTriangle 1 = b a e\n";
	std::cout << "\033[1;34mpoint_1 : ";
	check(b, a, e, point);
	std::cout << "\033[1;34mpoint_2 : ";
	check(b, a, e, point2);
	std::cout << "\033[1;34mpoint_3 : ";
	check(b, a, e, point3);

	return 0;
}
