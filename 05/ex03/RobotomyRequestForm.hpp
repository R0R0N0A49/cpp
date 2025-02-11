#pragma once

#include "AForm.hpp"
#include <cstdlib>
#define RobotColor "\033[1;38;2;150;105;205m"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const& other);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const & other);

	bool execute(Bureaucrat const & executor) const;

	class RobotomyFailure : public std::exception {
		const char* what() const throw() {
			return "\033[1;38;2;200;50;75mError: Robotization failed. You remain fully human.\033[0m";
		}
	};

private:
	RobotomyRequestForm();
	std::string _target;
};