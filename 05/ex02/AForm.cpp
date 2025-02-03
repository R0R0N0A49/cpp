#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() :  _name("default"), _gdSign(150), _gdExc(150) {
	this->_isSign = false;
	std::cout << colF << "Form deault constructor called\n" << reset;
}

Form::Form(std::string const &name, int sign, int exc) : _name(name), _isSign(false), _gdSign(sign), _gdExc(exc) {
	if (sign <= 0 || exc <= 0)
		throw Form::GradeTooHighException();
	if (sign > 150 || exc > 150)
		throw Form::GradeTooLowException();
	std::cout << colF << "Form " << name << " constructor called\n" << reset;
}

Form::Form(Form& copy) : _name(copy._name), _gdSign(copy._gdSign), _gdExc(copy._gdExc) {
	this->_isSign = copy._isSign;
	std::cout << colF << "Form copy constructor called\n" << reset;
}

Form& Form::operator=(Form const& copy) {
	const_cast<std::string&>(this->_name) = copy._name;
	const_cast<int&>(this->_gdSign) = copy._gdSign;
	const_cast<int&>(this->_gdExc) = copy._gdExc;
	this->_isSign = copy._isSign;
	return *this;
}

Form::~Form() {
	std::cout << colF << "Form " << this->_name << " destructor called\n" << reset;
}

std::string Form::getName() const {
	return this->_name;
}

int Form::getGdExc() const{
	return this->_gdExc;
}

int Form::getGdSign() const {
	return this->_gdSign;
}

bool Form::getIsSign() const {
	return this->_isSign;
}

bool Form::beSigned(Bureaucrat* src) {
	if (src->getGrade() > this->_gdSign)
		throw Form::GradeTooLowException();
	if (this->_isSign)
		return false;
	this->_isSign = true;
	return true;
}

std::ostream &operator<<(std::ostream &os, Form const &form) {
	os << form.getName() << ", Grade for sign " << form.getGdSign() << ", Grade for exc " << form.getGdExc();
	if (form.getIsSign())
		os << ", is signed\n";
	else
		os << ", isn't signed\n";
	return os;
}
