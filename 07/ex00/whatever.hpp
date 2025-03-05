#pragma once

#include <iostream>

template<typename T>
void swap(T &src1, T &src2) {
	T tmp = src1;
	src1 = src2;
	src2 = tmp;
}

template<typename T>
T min(T src1, T src2) {
	if (src1 > src2)
		return src2;
	return src1;
}

template<typename T>
T max(T src1, T src2) {
	if (src2 > src1)
		return src2;
	return src1;
}