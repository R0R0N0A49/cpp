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
	std::cout << colB << "Bureaucrat " << name << " constructor called" << reset << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name) {
	this->_grade = copy._grade;
	std::cout << colB << "Bureaucrat copy constructor called" << reset << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << colB << "Bureaucrat " << this->_name << " destructor called" << reset << std::endl;
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

void Bureaucrat::downGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void Bureaucrat::upGrade() {
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::signForm(Form& src) {
	if (src.beSigned(this))
		std::cout << colC << this->_name << " signed " << src.getName() << std::endl << reset;
	else
		std::cout << colC << this->_name << " couldn't sign " << src.getName() << " because is already signed" << std::endl << reset;
}

void Bureaucrat::executeForm(Form const& form) const {
	if (form.execute(*this))
		std::cout << colC << this->_name << " executed " << form.getName() << std::endl << reset;
	else
		std::cout << colC << this->_name << " couldn't execute " << form.getName() << " because is already execute" << std::endl << reset;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& obj) {
	o << colC << obj.getName() <<  ", bureaucrat grade " << obj.getGrade() << std::endl << reset;
	return o;
}
