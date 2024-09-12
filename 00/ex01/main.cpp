#include "phonebook.hpp"

int	ft_action(std::string line, Phonebook &test)
{
	if (!line.compare("ADD"))
	{
		system("clear");
		test.print_msg("ADD  CONTACT");
//		std::cout << GREEN <<	"\n****************************\n"
//								"*       ADD  CONTACT       *\n"
//								"****************************\n" << WHITE << std::endl;
		test.add_contact();
		system("clear");
		test.print_msg("CONTACT  ADDED");
//        std::cout << GREEN <<	"\n****************************\n"
//								"*       CONTACT ADDED      *\n"
//								"****************************\n" << WHITE << std::endl;
	} else if (!line.compare("SEARCH")) {
		system("clear");
		test.search_contacts();
	} else if (!line.compare("EXIT")) {
		system("clear");
		test.print_msg("Exit Phonebook");
//        std::cout << GREEN <<	"\n****************************\n"
//								"*      Exit Phonebook      *\n"
//								"****************************\n" << WHITE << std::endl;
		return (0);
	} else {
		system("clear");
		test.print_msg("Imput  Error");
//		std::cout << GREEN << "\n****************************\n"
//								"*       Imput  Error       *\n"
//								"****************************\n" << WHITE << std::endl;
	}
	return (-1);
}

int main()
{
	int	i = -1;
	std::string line;
	Phonebook test;
	system("clear");
	test.prompt_welcome();
	while (i == -1) {
		test.prompt_action();
		std::cout << GREEN << "> " << WHITE;
		std::getline(std::cin, line);
		i = ft_action(line, test);
	}
}