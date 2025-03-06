#pragma once

#include <iostream>
#include <algorithm>

class NotFind : std::exception {
	const char * what() const throw() {
		return ("Value not find in array\n");
	};
};

template<typename T>
int easyfind(T &tab, int target) {
	typename T::iterator it;
	it = std::find(tab.begin(), tab.end(), target);
	if (it != tab.end()) {
		return it;
	}
	return -1;
}

