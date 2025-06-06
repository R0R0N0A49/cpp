#pragma once

#include <stack>
#include <iostream>
class RPN
{
	private:
		std::stack<char> _nmb;
		std::stack<double> _res;

	public:
		RPN(std::string src);
		~RPN();
		void	start();

	private:
		void	_calculation(char syb);
		void	_plus();
		void	_minus();
		void	_mult();
		void	_div();
public:

	class ErrorInput : public std::exception
	{
		const char* what() const throw() {
			return "Error\nBad input";
		}
	};
};
