#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"
#define colB "\033[1;38;2;50;75;200m"
#define reset "\033[0m"

class Form;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(Bureaucrat const& copy);
		~Bureaucrat();
	public:
		std::string getName() const;
		int			getGrade() const;
		void        upGrade();
		void        downGrade();
		void		signForm(Form& src);

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

std::ostream & operator<<( std::ostream & o, Bureaucrat const & obj);
