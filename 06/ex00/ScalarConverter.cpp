#include "ScalarConverter.hpp"

bool IsInt(std::string src);
bool IsFloat(std::string src);
bool IsDouble(std::string src);
bool IsChar(std::string src);
bool IsSpecial(std::string src);

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

static void	promptInt(std::string src) {
	double num = strtod(src.c_str(), NULL);

	if (num > 32 && num < 127)
		std::cout << "char   : " << static_cast<char>(num) << std::endl;
	else if (num < 0 || num > 127)
		std::cout << "char   : impossible" << std::endl;
	else
		std::cout << "char   : non printable" << std::endl;

	if (num >= MININT && num <= MAXINT)
		std::cout << "int    : " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int    : impossible" << std::endl;

	std::cout << "double : " << num << std::endl;
	std::cout << "float  : " << static_cast<float>(num) << "f" << std::endl;
}

static void	promptFloat(std::string src) {
	float num = strtof(src.c_str(), NULL);

	if (num > 32 && num < 127)
		std::cout << "char   : " << static_cast<char>(num) << std::endl;
	else if (num < 0 || num > 127)
		std::cout << "char   : impossible" << std::endl;
	else
		std::cout << "char   : non printable" << std::endl;

	if (num >= MININT && num <= MAXINT)
		std::cout << "int    : " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int    : impossible" << std::endl;

	std::cout << "double : " << static_cast<double>(num) << std::endl;
	std::cout << "float  : " << num << "f" << std::endl;
}

static void	promptchar(std::string src) {
	int num = src[0];

	if (num > 32 && num < 127)
		std::cout << "char   : " << static_cast<char>(num) << std::endl;
	else if (num < 0 || num > 127)
		std::cout << "char   : impossible" << std::endl;
	else
		std::cout << "char   : non printable" << std::endl;

	if (num >= MININT && num <= MAXINT)
		std::cout << "int    : " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int    : impossible" << std::endl;

	std::cout << "double : " << static_cast<double>(num) << std::endl;
	std::cout << "float  : " << static_cast<float>(num) << "f" << std::endl;
}

static void	promptSpecial(std::string src) {
	std::cout << "char   : non printable" << std::endl;
	std::cout << "int    : impossible" << std::endl;
	std::cout << "double : " << src << std::endl;
	std::cout << "float  : " << src << std::endl;
}

void ScalarConverter::convert(std::string src) {
	if (IsSpecial(src))
		promptSpecial(src);
	else if (IsInt(src))
		promptInt(src);
	else if (IsDouble(src))
		promptInt(src);
	else if (IsChar(src))
		promptchar(src);
	else if (IsFloat(src))
		promptFloat(src);
	else
		std::cout << "Impossible convert" << std::endl;
}
