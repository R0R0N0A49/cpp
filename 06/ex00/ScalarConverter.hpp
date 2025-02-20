#pragma once

#include <iostream>

class ScalarConverter {
	protected:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		ScalarConverter& operator=(ScalarConverter const& copy);
		~ScalarConverter();
	public:
		static void convert(std::string src);
};
