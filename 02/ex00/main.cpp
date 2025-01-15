#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	b.setRawBits(65);
	Fixed c;
	c = b;
	std::cout << "a = " << a.getRawBits() << std::endl;
	std::cout << "b = " << b.getRawBits() << std::endl;
	std::cout << "c = " << c.getRawBits() << std::endl;
	return 0;
}