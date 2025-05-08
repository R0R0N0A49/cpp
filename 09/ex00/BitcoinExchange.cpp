#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file) {
	(void)file;
	std::ifstream data("data.csv");
	std::string tmp;
	std::pair<std::string, std::string> pair;
	_file.open(file.c_str());

	for (;std::getline(data, tmp);)
	{
		if (_checkLineData(tmp))
		{
			pair = _split(tmp, ',');
			_data[_getTime(pair.first)] = _getFloat(pair.second);
		}
	}
}

BitcoinExchange::~BitcoinExchange()
{

}

time_t	BitcoinExchange::_getTime(std::string src) {
	tm tmp;
	tmp.tm_year = strtod(src.c_str(), NULL);
	tmp.tm_mon = strtod((&src[5]), NULL);
	tmp.tm_mday = strtod((&src[8]), NULL);
	time_t rsl = mktime(&tmp);
	return rsl;
}

float	BitcoinExchange::_getFloat(std::string src) {
	return strtof(src.c_str(), NULL);
}

bool	BitcoinExchange::_checkLineData(std::string src)
{
	regex_t test;
	std::string type = "^[0,9](4)-[0,9](2)-[0,9](2) , [+-]?(\\d+(\\.\\d*)?|\\.\\d+)$";
	int i = regcomp(&test, type.c_str(), 0);
	if (i)
		return false;
	i = regexec(&test, src.c_str(), src.size(), NULL, 0);
	if (i)
		return true;
	return false;
}

void BitcoinExchange::readFile() {
	std::pair<std::string, std::string> pair;
	std::string tmp;

	for (;std::getline(_file, tmp);)
	{
		if (_checkLineData(tmp))
		{
			pair = _split(tmp, '|');
//			_data[_getValue(pair.first)] ;

		}
	}
}

std::pair<std::string, std::string> BitcoinExchange::_split(std::string src, char c) {
	std::string first, second;
	bool foundDelimiter = false;

	for (std::string::const_iterator it = src.begin(); it != src.end(); ++it) {
		if (*it == c && !foundDelimiter) {
			foundDelimiter = true;
			continue;
		}

		if (*it != ' ') {
			if (!foundDelimiter)
				first += *it;
			else
				second += *it;
		}
	}
	return std::make_pair(first, second);
}