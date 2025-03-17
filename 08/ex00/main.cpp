#include "easyfind.hpp"
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>


int main() {
	srand(time(NULL));

	std::cout << std::endl << "\033[1;38;2;75;50;200m>----------Test with vector----------<\033[1;m" << std::endl << std::endl;
	for (int y = 0; y < 10; y++)
	{
		std::vector<int> tmp;
		for (int i = 1; i < 100; i++)
			tmp.push_back(rand() % 100);
		try {
			easyfind(tmp, rand() % 25);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "\033[1;38;2;75;50;200m>----------Test with list----------<\033[1;m" << std::endl << std::endl;
	for (int y = 0; y < 10; y++)
	{
		std::list<int> tmp;
		for (int i = 1; i < 100; i++)
			tmp.push_back(rand() % 100);
		try {
			easyfind(tmp, rand() % 25);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
