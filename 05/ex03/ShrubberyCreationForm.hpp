#pragma once

# include "AForm.hpp"
# include <fstream>
#define ShrubberyColor "\033[1;38;2;150;205;105m"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const& other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const & other);

	bool execute(Bureaucrat const & executor) const;

	class OpenFailure : public std::exception {
		const char* what() const throw() {
			return "\033[1;38;2;200;50;75mError: can't open target file.\033[0m";
		}
	};

private:
	ShrubberyCreationForm();
	std::string _target;
};