#include "easyfind.hpp"

#include <vector>

int main() {
	std::vector<int> tmp;
	for (int i = 1; i < 100; i++)
		tmp.push_back(10);
	try {
		tmp[60] = 10;
		std::cout << "the first ocurence of ten is at position " << easyfind(tmp, 10) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
