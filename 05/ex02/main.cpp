#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>

int main() {
	std::srand(std::time(NULL));
	std::cout << "####################-Test-ShrubberyCreationForm-#####################\n";
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-150-###########\n\n";
		Bureaucrat test("test", 150);
		Form *tmp = new ShrubberyCreationForm("bob");
		std::cout << std::endl;
		try {
			test.signForm(*tmp);
			test.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-140-###########\n\n";
		Bureaucrat test1("test1", 140);
		Form *tmp = new ShrubberyCreationForm("bob");
		std::cout << std::endl;
		try {
			test1.signForm(*tmp);
			test1.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-5-###########\n\n";
		Bureaucrat test2("test2", 5);
		Form *tmp = new ShrubberyCreationForm("bob");
		std::cout << std::endl;
		try {
			test2.signForm(*tmp);
			test2.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	std::cout << "####################-Test-RobotomyRequestForm-#####################\n\n";
	{
		std::cout << "##########-Test-with-150-###########\n\n";
		Bureaucrat test("test", 150);
		Form *tmp = new RobotomyRequestForm("bob");
		std::cout << std::endl;
		try {
			test.signForm(*tmp);
			test.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-70-###########\n\n";
		Bureaucrat test1("test1", 70);
		Form *tmp = new RobotomyRequestForm("bob");
		std::cout << std::endl;
		try {
			test1.signForm(*tmp);
			test1.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-5-###########\n\n";
		Bureaucrat test2("test2", 5);
		Form *tmp = new RobotomyRequestForm("bob");
		std::cout << std::endl;
		try {
			test2.signForm(*tmp);
			test2.executeForm(*tmp);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	std::cout << "###################-Test-PresidentialPardonForm-####################\n\n";
	{
		std::cout << "##########-Test-with-150-###########\n\n";
		Bureaucrat test("test", 150);
		Form *tmp = new PresidentialPardonForm("bob");
		std::cout << std::endl;
		try {
			test.signForm(*tmp);
			test.executeForm((*tmp));
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-10-###########\n\n";
		Bureaucrat test1("test1", 10);
		Form *tmp = new PresidentialPardonForm("bob");
		std::cout << std::endl;
		try {
			test1.signForm(*tmp);
			test1.executeForm(*tmp);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	std::cout << std::endl;
	{
		std::cout << "##########-Test-with-5-###########\n\n";
		Bureaucrat test2("test2", 5);
		Form *tmp = new PresidentialPardonForm("bob");
		std::cout <<  std::endl;
		try {
			test2.signForm(*tmp);
			test2.executeForm(*tmp);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete tmp;
	}
	return 0;
}
