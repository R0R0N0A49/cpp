#include "Intern.hpp"
#include <ctime>

int main() {
	Intern intern;
	Bureaucrat bureaucrat("???", 1);
	Form* form;

	try{
		form = intern.makeForm("presidential pardon", "bob");
		bureaucrat.executeForm(*form);
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
