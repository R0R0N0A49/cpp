#include "Point.hpp"
#include "cstdlib"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(int argc, char **argv) {
	if (argc != 3) {
		std::cout << "./BSP <point_x> <point_y>\n";
		return 0;
	}
	Point a(0, 0);
	Point b(6, 0);
	Point c(3, 6);
	Point point(std::atof(argv[1]), std::atof(argv[2]));

	if (bsp(a, b, c, point))
		std::cout << "is in\n";
	else
		std::cout << "is out\n";
	return 0;
}
