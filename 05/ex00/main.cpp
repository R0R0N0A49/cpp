#include "Bureaucrat.hpp"

int main() {
	Bureaucrat tmp;
	try {
		Bureaucrat tmp2("bob", 151);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	} try {
		Bureaucrat tmp2("bob", 0);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	} try {
		std::cout << tmp; // grade = 150

		tmp.upGrade();

		std::cout << tmp; // grade = 149

		tmp.downGrade();

		std::cout << tmp; // grade = 150

		tmp.downGrade();

		std::cout << tmp; // grade = 151
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
