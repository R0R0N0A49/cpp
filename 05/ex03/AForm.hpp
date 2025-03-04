#pragma once

#include "Bureaucrat.hpp"
#define colF "\033[1;38;2;50;200;175m"

class Bureaucrat;

class Form{
	protected:
		const std::string	_name;
		bool				_isSign;
		const int			_gdSign;
		const int			_gdExc;

	public:
		Form();
		Form(std::string const &name, int sign, int exc);
		Form(Form& copy);
		Form& operator=(Form const& copy);
		virtual ~Form();

	public:
		int			getGdSign() const;
		int			getGdExc() const;
		bool		getIsSign() const;
		std::string	getName() const;
		bool		beSigned(Bureaucrat* src);
		virtual bool execute(Bureaucrat const & executor) const = 0;

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
	class GradeTooLowSign : public std::exception{
		const char *what() const throw() {
			return ("\033[1;38;2;200;50;75mYour current rank doesn't allow you to sign this\033[0m");
		}
	};
	class GradeTooLowExc : public std::exception{
		const char *what() const throw() {
			return ("\033[1;38;2;200;50;75mYour current rank doesn't allow you to execute this\033[0m");
		}
	};
	class IsNotSignedExc : public std::exception{
		const char *what() const throw() {
			return ("\033[1;38;2;200;50;75mThis form must be signed before execution\033[0m");
		}
	};
	class IsAlreadySignedExc : public std::exception{
		const char *what() const throw() {
			return ("\033[1;38;2;200;50;75mThis form is already signed\033[0m");
		}
	};
};

std::ostream & operator<<( std::ostream & o, Form const & obj);
