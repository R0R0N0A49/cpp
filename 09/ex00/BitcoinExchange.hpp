#pragma once

#include <iostream>
#include <iomanip>
#include <map>
#include <fstream>
#include <cstdlib>
#include <regex.h>
#include <ctime>
#include <utility>

#define RED "\033[1;38;2;200;50;25m"
#define RESET "\033[1;m"

#define MAP std::map<time_t, float>

class BitcoinExchange {
	private:
		MAP _data;
		std::ifstream _file;

	public:
		BitcoinExchange(std::string file);
		~BitcoinExchange();
		void	readFile();

	private:
		bool	_checkLineData(std::string src);
		std::pair<std::string, std::string> _split(std::string src, char c);
		time_t	_getTime(std::string src);
		float	_getFloat(std::string src);
		void	_getValue(std::string); // conparer les time_t pour trouver la date la plus recente

	public:

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
		class BadImput : public std::exception
		{
			const char* what() const throw() {
				return "Error, btc need one argument : ./btc <file.txt>\n";
			}
		};
		class badLineInFile : public std::exception
		{
			const char* what() const throw() {
				return "error, Bad line in your file : ";
			}
		};
};

