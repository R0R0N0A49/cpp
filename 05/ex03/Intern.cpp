#include "Intern.hpp"

Intern::Intern() {
	std::cout << colIntern << "Intern constructor called\n" << reset;
}

Intern::Intern(Intern& other) {
	(void)other;
	std::cout << colIntern << "Intern copy constructor called\n" << reset;
}

Intern& Intern::operator=(Intern const& other) {
	(void)other;
	return *this;
}

Intern::~Intern() {
	std::cout << colIntern << "Intern destructor called\n" << reset;
}

Form* Intern::makeForm(std::string type, std::string target) {
	std::string level[3] = {"presidential pardon", "Robotomy request", "shrubbery creation"};
	int i;
	for (i = 0; i < 3; i++) {
		if (type == level[i])
			break;
	}

	switch (i) {
	case 0:
			std::cout << colIntern << "Intern creates " + type << std::endl << reset;
			return new PresidentialPardonForm(target);
		case 1:
			std::cout << colIntern << "Intern creates " + type << std::endl << reset;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << colIntern << "Intern creates " + type << std::endl << reset;
			return new ShrubberyCreationForm(target);
	default:
			throw Intern::InternException();
	}
}

