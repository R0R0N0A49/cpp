#include "iter.hpp"

int main() {
	std::cout << "\033[1;38;2;0;150;175m" << "string array :" << "\033[1;m" << std::endl;
	std::string array[] = {"Bonjour", "je", "suis", "a", "42"};
	::iter(array, 5, ::print);
	std::cout << std::endl;
	std::cout << "\033[1;38;2;0;150;175m" << "int array :" << "\033[1;m" << std::endl;
	int tmp[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	::iter(tmp, 10, ::print);
	std::cout << std::endl;
	std::cout << "\033[1;38;2;0;150;175m" << "double array :" << "\033[1;m" << std::endl;
	double tmp2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	::iter(tmp2, 5, addOne);
	return 0;
}