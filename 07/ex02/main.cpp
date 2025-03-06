#include "Array.hpp"

int main() {
	std::cout << "\033[1;38;2;0;150;175m" << "test with Array<string> and index too big" << "\033[1;m" << std::endl;
	{
		Array<std::string> tmp(2);
		try {
			tmp[0] = "bonjour";
			tmp[1] = "hello";
			std::cout << "tmp[0] = " << tmp[0] << std::endl;
			std::cout << "tmp[1] = " << tmp[1] << std::endl;
			std::cout << "tmp[2] = " << tmp[2] << std::endl; // throw error index
		} catch (std::exception &e) {
			std::cout << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "\033[1;38;2;0;150;175m" << "test with Array<int> and size()" << "\033[1;m" << std::endl;
	{
		Array<int> *tmp = new Array<int>(10);
		try {
			std::cout << "tmp.size = " << tmp->size() << std::endl;
			for (unsigned long i = 1; i < tmp->size(); i++) {
				tmp[0][i] = tmp[0][i - 1] + i;
			}
			for (unsigned long i = 0; i < tmp->size(); i++) {
				std::cout << "tmp[" << i << "] = " << tmp[0][i] << std::endl;
			}
		} catch (std::exception &e) {
			delete tmp;
			std::cout << std::endl << e.what() << std::endl;
		}
		delete tmp;
	}
}