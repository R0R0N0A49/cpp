#include <iostream>
#include <cstdlib>

bool IsInt(std::string src) {
	char *tmp;
	std::strtol(src.c_str(), &tmp, 10);
	if (!tmp[0])
		return true;
	return false;
}

bool IsFloat(std::string src) {
	char *tmp;
	if (src[0] == 'f')
		return false;
	std::strtof(src.c_str(), &tmp);
	if (tmp[0] == 'f' && !tmp[1])
		return true;
	return false;
}

bool IsDouble(std::string src) {
	char *tmp;
	std::strtod(src.c_str(), &tmp);
	if (!tmp[0])
		return true;
	return false;
}

bool IsChar(std::string src) {
	if (src.length() == 1)
		return true;
	return false;
}