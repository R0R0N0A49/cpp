#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Form_default", 72, 45) {
	std::cout << RobotColor << "RobotomyRequestForm default constructor called\n" << reset;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("Form_" + target, 72, 45){
	this->_target = target;
	std::cout << RobotColor << "RobotomyRequestForm constructor called\n" << reset;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other) : Form(other.getName(), other.getGdSign(), other.getGdExc()) {
	this->_target = other._target;
	std::cout << RobotColor << "RobotomyRequestForm copy constructor called\n" << reset;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << RobotColor << "RobotomyRequestForm destructor called\n" << reset;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& other) {
	if (&other == this)
		return *this;
	this->_target = other._target;
	const_cast<std::string&>(this->_name) = other.getName();
	return *this;
}

bool RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->_isSign)
		throw Form::IsNotSignedExc();
	if (executor.getGrade() <= this->getGdExc()) {
		int i  = std::rand() % 2;
		if (i == 1)
			std::cout << this->_target << ", you have been robotized.\n";
		else
			throw RobotomyFailure();
		return true;
	}
	throw Form::GradeTooLowExc();
}
