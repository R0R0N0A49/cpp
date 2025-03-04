#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Form_default", 25, 5) {
	std::cout << calPre << "PresidentialPardonForm default constructor called\n" << reset;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("Form_" + target, 25, 5){
	this->_target = target;
	std::cout << calPre << "PresidentialPardonForm constructor called\n" << reset;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other) : Form(other.getName(), other.getGdSign(), other.getGdExc()) {
	this->_target = other._target;
	std::cout << calPre << "PresidentialPardonForm copy constructor called\n" << reset;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << calPre << "PresidentialPardonForm destructor called\n" << reset;
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
	if (!this->_isSign)
		throw Form::IsNotSignedExc();
	if (executor.getGrade() <= this->getGdExc()) {
		std::cout << this->_target << ", you are pardoned by Zaphod Beeblebrox\n";
		return true;
	}
		throw Form::GradeTooLowExc();
}
