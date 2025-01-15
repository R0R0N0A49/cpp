#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed d;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed _b(10);
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "_b + a = " << _b + a << std::endl;
	d = a - b / 5 * 100;
	std::cout << "d = " << d << std::endl;
	std::cout << "max(a, d) = " << Fixed::max( a, d ) << std::endl;
	std::cout << "min(a, d) = " << Fixed::min( a, d ) << std::endl;
	return 0;
}
