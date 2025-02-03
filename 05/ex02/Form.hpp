#pragma once

#include "Bureaucrat.hpp"
#define colF "\033[1;38;2;50;200;75m"

class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_isSign;
		const int			_gdSign;
		const int			_gdExc;

	public:
		Form();
		Form(std::string const &name, int sign, int exc);
		Form(Form& copy);
		Form& operator=(Form const& copy);
		~Form();

	public:
		int			getGdSign() const;
		int			getGdExc() const;
		bool		getIsSign() const;
		std::string	getName() const;
		bool		beSigned(Bureaucrat* src);

	class GradeTooHighException : public std::exception {
		const char* what() const throw() {
			return "\033[1;38;2;200;50;75mGrade too high\033[0m";
		}
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw() {
			return "\033[1;38;2;200;50;75mGrade too low\033[0m";
		}
	};
};

std::ostream & operator<<( std::ostream & o, Form const & obj);
