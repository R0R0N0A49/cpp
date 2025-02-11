#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>

int main() {
	std::srand(std::time(NULL));
	Bureaucrat test("test", 140);
	Bureaucrat test1("test1", 150);
	Bureaucrat test2("test2", 5);
	std::cout << std::endl;
	{
		Form *tmp = new ShrubberyCreationForm("bob");
		try {
			test.signForm(*tmp);
			test.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete tmp;
	}
	std::cout << std::endl;
	{
		Form *tmp = new ShrubberyCreationForm("bob");
		try {
			test1.signForm(*tmp);
			test1.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete tmp;
	}
	std::cout << std::endl;
	{
		Form *tmp = new ShrubberyCreationForm("bob");
		try {
			test2.signForm(*tmp);
			test2.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete tmp;
	}
	std::cout << std::endl;
	// {
	// 	Form *tmp = new RobotomyRequestForm("bob");
	// 	try {
	// 		test.signForm(*tmp);
	// 		test.executeForm(*tmp);
	// 	} catch (const std::exception &e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	delete tmp;
	// }
	// std::cout << std::endl;
	// {
	// 	Form *tmp = new RobotomyRequestForm("bob");
	// 	try {
	// 		test1.signForm(*tmp);
	// 		test1.executeForm(*tmp);
	// 	} catch (const std::exception &e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	delete tmp;
	// }
	// std::cout << std::endl;
	// {
	// 	Form *tmp = new RobotomyRequestForm("bob");
	// 	try {
	// 		test2.signForm(*tmp);
	// 		test2.executeForm(*tmp);
	// 	} catch (const std::exception &e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// 	delete tmp;
	// }
	// std::cout << std::endl;
	// {
	// 	Form *tmp = new PresidentialPardonForm("bob");
	// 	try {
	// 		test.signForm(*tmp);
	// 		test.executeForm((*tmp));
	// 	} catch(std::exception &e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	// {
	// 	Form *tmp = new PresidentialPardonForm("bob");
	// 	try
	// 	{
	// 		test1.signForm(*tmp);
	// 		test1.executeForm(*tmp);
	// 	}
	// 	catch(std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	// {
	// 	Form *tmp = new PresidentialPardonForm("bob");
	// 	try
	// 	{
	// 		test2.signForm(*tmp);
	// 		test2.executeForm(*tmp);
	// 	}
	// 	catch(std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
	return 0;
}
