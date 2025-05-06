#pragma once

#include <iostream>
#include <list>
#include <fstream>
#include <cstdlib>

#define RED "\033[1;38;2;200;50;25m"
#define RESET "\033[1;m"

class BitcoinExchange {
	public:
		BitcoinExchange();
		~BitcoinExchange();
//		void PrintValue(std::string file);

	private:
		std::list<long> _date;
		std::list<float> _value;
//		float	_findValue(long src);
		double	_ftSplit(std::string src, int i = 0);
//		void	_parsing(std::string src);
//		void	_verifFile(std::string file);

	class BadFile : public std::exception {
		 const char* what() const throw() {
			 return "The file doesn't exist or it's a directory\n";
		 };
	};
	class DataError : public std::exception {
		const char* what() const throw() {
			return "Missing information in data.csv\n";
		};
	};
};