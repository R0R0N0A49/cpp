#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default") {
	this->_grade = 150;
	std::cout << colB << "Bureaucrat default constructor called" << reset << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
	std::cout << colB << "Bureaucrat constructor called" << reset << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name) {
	this->_grade = copy._grade;
	std::cout << colB << "Bureaucrat copy constructor called" << reset << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << colB << "Bureaucrat destructor called" << reset << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy) {
	this->_grade = copy._grade;
	const_cast<std::string&>(this->_name) = copy._name;
	return *this;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj) {
	o << obj.getName() <<  ", bureaucrat grade " << obj.getGrade() << std::endl;
	return o;
}
