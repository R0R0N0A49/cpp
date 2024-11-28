#include "Fixed.hpp"

int main()
{
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( 10 );

	if (b == c)
		std::cout << "b == c -> true" << std::endl;
	else
		std::cout << "b == c -> false" << std::endl;
}