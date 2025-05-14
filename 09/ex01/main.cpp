#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	try {
		RPN tmp = RPN((std::string)argv[1]);
		tmp.start();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	(void)argv;
	return 0;
}
