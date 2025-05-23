#include "easyfind.hpp"
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>


int main() {
	srand(time(NULL));
    int Random;

	std::cout << std::endl << "\033[1;38;2;75;50;200m>----------Test with vector----------<\033[1;m" << std::endl << std::endl;
	{
		std::vector<int> tmp;
        std::cout << "in vector :";
		for (int i = 1; i < 100; i++)
        {
			Random = rand() % 100;
            std::cout << " " << Random;
			tmp.push_back(Random);
		}
       	std::cout << std::endl;
       	std::cout << std::endl;
       	for (int y = 0; y < 10; y++)
        {
            try {
				Random = rand() % 25;
           		std::cout << "value to find : " << Random << std::endl;
				easyfind(tmp, Random);
            } 		catch (std::exception &e) {
                std::cout << e.what() << std::endl;
            }
        }
	}
	std::cout << std::endl << "\033[1;38;2;75;50;200m>----------Test with list----------<\033[1;m" << std::endl << std::endl;
	{
        std::list<int> tmp;
        std::cout << "in list :";
		for (int i = 1; i < 100; i++)
        {
			Random = rand() % 100;
            std::cout << " " << Random;
			tmp.push_back(Random);
		}
       	std::cout << std::endl;
       	std::cout << std::endl;
       	for (int y = 0; y < 10; y++)
        {
            try {
				Random = rand() % 25;
           		std::cout << "value to find : " << Random << std::endl;
				easyfind(tmp, Random);
            } 		catch (std::exception &e) {
                std::cout << e.what() << std::endl;
            }
        }
	}
	return 0;
}
