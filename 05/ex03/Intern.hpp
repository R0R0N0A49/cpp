#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#define colIntern "\033[1;38;2;125;200;75m"

class Intern {
	public:
		Intern();
		Intern(Intern& other);
		~Intern();
		Intern& operator=(Intern const& other);

		Form* makeForm(std::string type, std::string target);

	class InternException : public std::exception {
		const char* what() const throw() {
			return "\033[1;38;2;200;50;75mIntern can't creates this form\033[0m";
		}
	};
};
