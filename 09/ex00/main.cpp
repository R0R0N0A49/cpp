#include "BitcoinExchange.hpp"

int main()
{
	try {
		BitcoinExchange test;
	} catch (std::exception& e){
		std::cout << RED << e.what() << RESET;
	}
	return 0;
}