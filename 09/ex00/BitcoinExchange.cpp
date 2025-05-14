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
	std::tm tmp;
	std::memset(&tmp, 0, sizeof(tm));
	tmp.tm_year = strtod(src.c_str(), NULL) - 1900;
	tmp.tm_mon = strtod((&src[5]), NULL) - 1;
	tmp.tm_mday = strtod((&src[8]), NULL);
	std::tm original = tmp;
	time_t rsl = std::mktime(&tmp);
	if (tmp.tm_year != original.tm_year ||tmp.tm_mon != original.tm_mon || tmp.tm_mday != original.tm_mday  )
		throw badLineInFile();
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
		throw ErrorRegcomp();

	i = regexec(&test, src.c_str(), 0, NULL, 0);
	regfree(&test);

	if (i != REG_NOMATCH)
		return true;

	return false;
}

bool	BitcoinExchange::_checkLineInput(std::string src)
{
	regex_t test;
	std::string type = "^[0-9]{4}-[0-9]{2}-[0-9]{2} \\| (0|([0-9]{1,3}|1000))$";

	int i = regcomp(&test, type.c_str(), REG_EXTENDED);
	if (i)
		throw ErrorRegcomp();

	i = regexec(&test, src.c_str(), 0, NULL, 0);
	regfree(&test);
	if (!i)
		return true;

	throw badLineInFile();
}

void	BitcoinExchange::readFile() {
	std::pair<std::string, std::string> pair;
	std::string tmp;

	std::getline(_file, tmp);
	for (;std::getline(_file, tmp);)
	{
		try {
			_checkLineInput(tmp);
			pair = _split(tmp, '|');
			_getValue(_getTime(pair.first), strtof(pair.second.c_str(), 0), pair.first);
		} catch (std::exception &e) {
			std::cerr << RED << e.what() << RESET << tmp << std::endl;
		}
	}
}

void BitcoinExchange::_getValue(time_t date, int nmbBitcoin, std::string realDate) {
	if (!date)
		return;
	if (nmbBitcoin <= 0)
		_printValue(realDate, nmbBitcoin, 0);
	else {
		MAP::iterator it = _data.end();
		for (it--; it != _data.begin(); it--)
		{
			if (it->first <= date)
				break ;
		}
		if (it == _data.begin() && it->first > date)
			_printValue(realDate, nmbBitcoin, 0);
		else
			_printValue(realDate, nmbBitcoin, it->second);
	}
}

void BitcoinExchange::_printValue(std::string date, int nmbBitcoin, float value) {
		std::cout << "to " << date << " for " << nmbBitcoin << " bitcoin : " << nmbBitcoin * value << "$" << std::endl;
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