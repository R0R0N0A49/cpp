#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Form_default", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("Form_" + target, 25, 5){
	this->_target = target;
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other) : Form(other.getName(), other.getGdSign(), other.getGdExc()) {
	this->_target = other._target;
	std::cout << "PresidentialPardonForm copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& other) {
	if (&other == this)
 		return *this;
	this->_target = other._target;
	const_cast<std::string&>(this->_name) = other.getName();
	return *this;
}

bool PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() <= this->getGdExc()) {
		std::cout << this->_target << ", you are pardoned by Zaphod Beeblebrox\n";
		return true;
	}
		throw Form::GradeTooLowExc();
}
