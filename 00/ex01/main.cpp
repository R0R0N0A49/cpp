#include "phonebook.hpp"

int	ft_action(std::string line, Phonebook &test)
{
	if (!line.compare("ADD"))
	{
		system("clear");
		std::cout << GREEN <<	"\n****************************\n"
								"*       ADD  CONTACT       *\n"
								"****************************\n" << WHITE << std::endl;
		test.add_contact();
		system("clear");
		std::cout << GREEN <<	"\n****************************\n"
								"*       CONTACT ADDED      *\n"
								"****************************\n" << WHITE << std::endl;
	} else if (!line.compare("SEARCH")) {
		system("clear");
		std::cout << GREEN <<	"\n****************************\n"
								"*      SEARCH CONTACT      *\n"
								"****************************\n" << WHITE << std::endl;
		test.search_contacts();
	} else if (!line.compare("EXIT")) {
		system("clear");
		std::cout << GREEN <<	"\n****************************\n"
								"*      Exit Phonebook      *\n"
								"****************************\n" << WHITE << std::endl;
		return (0);
	} else {
		system("clear");
		std::cout << GREEN << "\n****************************\n"
								"*       Imput  Error       *\n"
								"****************************\n" << WHITE << std::endl;
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