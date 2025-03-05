#pragma once

#include <iostream>

template<typename E>
void addOne(E src) {
	std::cout << src + 1 << std::endl;
}

template<typename E>
void print(E src) {
	std::cout << src << std::endl;
}

template<typename T>
void iter(T *src, long len, void (*f)(T &)) {
	for (int i = 0; i < len; i++) {
		f(src[i]);
	}
}
