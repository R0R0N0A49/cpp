#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(NULL));
	Span i(100);
	try {
		for (int j = 0; j < 100; j++)
			i.addNumber(rand() % 10000);
		unsigned int tmp = i.shortestSpan();
		std::cout << "shortestSpan = " << tmp << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
