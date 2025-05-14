#include "BitcoinExchange.hpp"
//#include <unistd.h>
int main(int argc, char **argv)
{
	try {
		if (argc != 2)
			throw BitcoinExchange::BadImput();
		std::cout << std::fixed << std::setprecision(2);
		BitcoinExchange test(argv[1]);
		test.readFile();
	} catch (std::exception& e){
		std::cerr << RED << e.what() << RESET;
	}
	std::cout.unsetf(std::ios::fixed);
//	close(11);
	return 0;
}