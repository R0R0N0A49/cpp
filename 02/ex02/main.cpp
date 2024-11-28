#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed d;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	d = a - b / 5 * 100;
	std::cout << Fixed::max( a, d ) << std::endl;
	std::cout << Fixed::min( a, d ) << std::endl;
	return 0;
}