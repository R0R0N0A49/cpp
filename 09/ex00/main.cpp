#include "BitcoinExchange.hpp"
//#include <unistd.h>
int main(int argc, char **argv)
{
	try {
		if (argc != 2)
			throw BitcoinExchange::BadImput();
		BitcoinExchange test(argv[1]);
		test.readFile();
	} catch (std::exception& e){
		std::cerr << RED << e.what() << RESET;
	}
//	close(11);
	return 0;
}