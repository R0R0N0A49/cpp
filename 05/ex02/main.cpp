#include "Form.hpp"

int main() {
	std::cout << "\033[1;33m##########-test-constructor-##########" << reset << std::endl << std::endl;
	try {
		Bureaucrat tmp("bob", 59);
		Form form("form 1", 29, 10);
		Form fom("form 2", 0, 0);
		tmp.signForm(form);
		Bureaucrat tmp2("bob", 14);
		tmp2.signForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\033[1;33m############-test--signed-############" << reset << std::endl << std::endl;
	try {
		Bureaucrat tmp("bob", 22);
		Form form("form 3", 59, 10);
		Form fom("form 4", 12, 100);
		std::cout << std::endl << tmp << form << std::endl;
		tmp.signForm(form);
		std::cout << std::endl << form << std::endl;
		Bureaucrat tmp2("kevin", 14);
		std::cout << std::endl << tmp2 << fom << std::endl;
		tmp2.signForm(fom);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
