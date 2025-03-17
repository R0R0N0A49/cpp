#pragma once

#include <iostream>
#include <cstdlib>

#define MAXINT 2147483647
#define MININT -2147483648

class ScalarConverter {
	protected:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		ScalarConverter& operator=(ScalarConverter const& copy);
		~ScalarConverter();
	public:
		static void convert(std::string src);
};
