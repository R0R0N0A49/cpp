#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(NULL));
	std::cout << "\033[1;38;2;50;155;200mTest for Span 10.000 with random number\033[1;m" << std::endl << std::endl;
	{
		Span sp(10000);
		try {
			for (int j = 0; j < 10000; j++)
				sp.addNumber((rand() % 100000) + j);
			unsigned int tmp = sp.shortestSpan();
			std::cout << "\tshortestSpan = " << tmp << std::endl;
			tmp = sp.longestSpan();
			std::cout << "\tlongestSpan = " << tmp << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "\033[1;38;2;50;155;200mTest for Span 5 with subject number\033[1;m" << std::endl << std::endl;
	{
		Span sp(5);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			unsigned int tmp = sp.shortestSpan();
			std::cout << "\tshortestSpan = " << tmp << std::endl;
			tmp = sp.longestSpan();
			std::cout << "\tlongestSpan = " << tmp << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "\033[1;38;2;50;155;200mTest for Span 5 with 6 addnumber()\033[1;m" << std::endl << std::endl;
	{
		try {
			Span sp(5);
			for (unsigned int i = 0; i < 6; i++) {
				sp.addNumber(i);
			}
			unsigned int tmp = sp.shortestSpan();
			std::cout << "\tshortestSpan = " << tmp << std::endl;
			tmp = sp.longestSpan();
			std::cout << "\tlongestSpan = " << tmp << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "\033[1;38;2;50;155;200mTest for Span 100 with addnumber( list )\033[1;m" << std::endl << std::endl;
	{
		try {
			std::list<unsigned int> list;
			Span sp(100);
			for (unsigned int i = 0; i < 100; i++)
				list.push_back(i);
			sp.addNumber(list);
			unsigned int tmp = sp.shortestSpan();
			std::cout << "\tshortestSpan = " << tmp << std::endl;
			tmp = sp.longestSpan();
			std::cout << "\tlongestSpan = " << tmp << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "\033[1;38;2;50;155;200mTest for Span 1 with random()\033[1;m" << std::endl << std::endl;
	{
		try {
			Span sp(1);
			sp.addNumber(rand() % 10);
			unsigned int tmp = sp.shortestSpan();
			std::cout << "\tshortestSpan = " << tmp << std::endl;
			tmp = sp.longestSpan();
			std::cout << "\tlongestSpan = " << tmp << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
