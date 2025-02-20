#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	(void)copy;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy) {
	(void)copy;
	return *this;
}

void ScalarConverter::convert(std::string src) {
	(void)src;
}
