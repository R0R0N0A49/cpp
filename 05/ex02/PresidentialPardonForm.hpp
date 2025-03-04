#pragma once

#include "AForm.hpp"
#define calPre "\033[1;38;2;205;155;105m"


class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const& other);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const & other);

		bool execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm();
		std::string _target;
};