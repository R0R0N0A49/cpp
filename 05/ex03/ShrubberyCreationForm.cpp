#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Form_default", 145, 137) {
	std::cout << ShrubberyColor << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("Form_" + target, 145, 137){
	this->_target = target;
	std::cout << ShrubberyColor << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & other) : Form(other.getName(), other.getGdSign(), other.getGdExc()) {
	this->_target = other._target;
	std::cout << ShrubberyColor << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << ShrubberyColor << "ShrubberyCreationForm destructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other) {
	if (&other == this)
		return *this;
	this->_target = other._target;
	const_cast<std::string&>(this->_name) = other.getName();
	return *this;
}

bool ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() <= this->getGdExc()) {
		std::string tmp = _target + "_shrubbery";
		std::ofstream _output(tmp.c_str());
		if (_output.is_open()) {
			_output <<	"      _-_\n"
						"   /~~   ~~\\\n"
						" /~~       ~~\\\n"
						"{             }\n"
						" \\  _-   -_  /\n"
						"   ~ \\\\ // ~\n"
						"      | |     \n"
						"      | |     \n"
						"     // \\\\\n";
			_output.close();
			std::cout << "The file is open and now contains data.\n";
		}
		else
			throw OpenFailure();
		return true;
	}
	throw Form::GradeTooLowExc();
}
