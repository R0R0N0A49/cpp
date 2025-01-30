#include "Bureaucrat.hpp"

int main() {
	Bureaucrat tmp;
	try {
		Bureaucrat tmp2("bob", 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat tmp2("bob", 0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << tmp;
	return 0;
}
