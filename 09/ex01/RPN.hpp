#pragma once

#include <stack>
#include <iostream>
class RPN
{
	private:
		std::stack<int> _nmb;
		std::stack<char> _symb;

	public:
		RPN(std::string src);
		~RPN();
		void	start();

	private:
		long _getCalculation(long first, char symb, int second);

public:
	class Error : public std::exception
	{
		const char* what() const throw() {
			return "Error";
		}
	};
};
