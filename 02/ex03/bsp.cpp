#include "Point.hpp"

double areaCalculator(Point const a, Point const b, Point const c)
{
	Fixed tmp = a.gx() * (b.gy() - c.gy()) + b.gx() * (c.gy() - a.gy()) + c.gx() * (a.gy() - b.gy());
	double area = 0.5 * abs(tmp.toInt());
	return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return (false);
	double area = areaCalculator(point, a, b);
	if (area == 0)
		return (false);
	double total = area;
	area = areaCalculator(point, b, c);
	if (area == 0)
		return (false);
	total += area;
	area = areaCalculator(point, a, c);
	if (area == 0)
		return (false);
	total += area;
	if (areaCalculator(a, b, c) == total)
		return (true);
	return (false);
}
