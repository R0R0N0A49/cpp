#include "ScalarConverter.hpp"

bool IsInt(std::string src);
bool IsFloat(std::string src);
bool IsDouble(std::string src);
bool IsChar(std::string src);

int main(int argc, char** argv) {
	if (argc != 2 || !argv[1])
		return 0;
	double tmp = 128;
	std::cout << "int    : " << IsInt(argv[1]) << std::endl;
	std::cout << "Float  : " << IsFloat(argv[1]) << std::endl;
	std::cout << "Double : " << IsDouble(argv[1]) << std::endl;
	std::cout << "Char   : " << IsChar(argv[1]) << std::endl;

}