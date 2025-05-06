#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream file("data.csv");
	if (!file.is_open()) {
		throw BadFile();
	}

	std::string tmp;
	file >> tmp;
	for (file >> tmp; !tmp.empty(); file >> tmp) {
		_ftSplit(tmp);
		tmp = "";
	}
}

BitcoinExchange::~BitcoinExchange() {
}

double BitcoinExchange::_ftSplit(std::string src, int i) {
	std::string first;
	std::string second;

	if (src == "start")
		return -1;
	std::string::iterator iter = src.begin();
	for (; *iter != ',' && *iter != '|' && iter != src.end() ; iter++ ) {
		if (*iter != '-')
			first += *iter;
	}
	if (first.empty())
		throw DataError();
	if (iter != src.end())
		iter++;
	for (; iter != src.end(); iter++)
		second += *iter;
	if (second.empty())
		throw DataError();
	if (i == 0) {
		_date.push_back(static_cast<long>(strtod(first.c_str(), NULL)));
		_value.push_back(strtof(second.c_str(), NULL));
		return 0;
	}
	if (i == 1)
		return strtod(first.c_str(), NULL);
	if (i == 2)
		return strtod(second.c_str(), NULL);
	return -1;
}

