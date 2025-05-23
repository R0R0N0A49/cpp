#pragma once

#include <iostream>
#include <algorithm>

class NotFind : public std::exception {
	const char * what() const throw() {
		return ("\033[1;38;2;200;50;75mValue not found in array\033[0m");
	};
};

template<typename T>
void easyfind(T &tab, int target) {
	typename T::iterator it;
	it = std::find(tab.begin(), tab.end(), target);
	if (it != tab.end()) {
		std::cout << "\033[1;38;2;50;200;75mValue found in container at position " << std::distance(tab.begin(), it) + 1 << "\033[0m" << std::endl;
		return ;
	}
	throw NotFind();
}

