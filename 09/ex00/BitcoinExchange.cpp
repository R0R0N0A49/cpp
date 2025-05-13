#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file) {
	(void)file;
	std::ifstream data("data.csv");
	std::string tmp;
	std::pair<std::string, std::string> pair;
	_file.open(file.c_str());

	std::getline(data, tmp);
	for (;std::getline(data, tmp);)
	{
		if (!_checkLineData(tmp))
			throw DataError();
		pair = _split(tmp, ',');
		_data[_getTime(pair.first)] = _getFloat(pair.second);
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
	std::string type = "^[0-9]{4}-[0-9]{2}-[0-9]{2},(0|[0-9]+(\\.[0-9]+)?)$";

	int i = regcomp(&test, type.c_str(), REG_EXTENDED);
	if (i)
		return false;

	i = regexec(&test, src.c_str(), 0, NULL, 0);
	regfree(&test);

	if (i != REG_NOMATCH)
		return true;

	return false;
}

bool	BitcoinExchange::_checkLineInput(std::string src)
{
	std::cout << "src == {" << src << "}";
	regex_t test;
	std::string type = "^[0-9]{4}-[0-9]{2}-[0-9]{2} \\| (0|([0-9]{1-3}|1000))$";
//	std::string type = "^\\d(4)-\\d(2)-\\d(2) \\| \\+?([0-9](4))$";
	int i = regcomp(&test, type.c_str(), 0);
	if (i)
		return false;
	i = regexec(&test, src.c_str(), src.size(), NULL, 0);
	std::cout << ", i = " << i << std::endl;
	if (i != REG_NOMATCH)
		return true;

	throw badLineInFile();
}

void BitcoinExchange::readFile() {
	std::pair<std::string, std::string> pair;
	std::string tmp;

	for (;std::getline(_file, tmp);)
	{
		try {
			_checkLineInput(tmp);
			pair = _split(tmp, '|');
			_data[_getTime(pair.first)] = strtof(pair.second.c_str(), NULL);
		} catch (std::exception &e) {
			std::cout << e.what() << tmp << std::endl;
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