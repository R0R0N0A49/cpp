#include "RPN.hpp"

RPN::RPN(std::string src) {
	std::string::iterator it = src.end();
	char save = ' ';
	for (it--; it != src.begin(); it--)
	{
		if ((!std::isdigit(*it) && *it != '/' && *it != '*' && *it != '+' && *it != '-' && *it != ' ') || (*it != ' ' && save != ' '))
			throw ErrorInput();
		if (*it != ' ' && save == ' ') {
			_nmb.push(*it);
		}
		save = *it;
	}
	if (!std::isdigit(*it) && *it != '/' && *it != '*' && *it != '+' && *it != '-' && *it != ' ')
		throw ErrorInput();
	if (*it != ' ')
		_nmb.push(*it);
}

RPN::~RPN() {
}

void RPN::start() {
	if (_nmb.empty() || _nmb.size() < 3)
		throw ErrorInput();
	try {
		for (; _nmb.size() > 0;)
		{
			if (std::isdigit(_nmb.top()))
				_res.push(_nmb.top() - '0');
			else
				_calculation(_nmb.top());
			_nmb.pop();
		}
		if (_res.size() == 1)
			std::cout << _res.top() << std::endl;
		else
			throw ErrorInput();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

}

void RPN::_plus()
{
	double a = _res.top();
	_res.pop();
	double b = _res.top();
	_res.pop();
	_res.push(b + a);
}

void RPN::_minus()
{
	double a = _res.top();
	_res.pop();
	double b = _res.top();
	_res.pop();
	_res.push(b - a);
}

void RPN::_mult()
{
	double a = _res.top();
	_res.pop();
	double b = _res.top();
	_res.pop();
	_res.push(b * a);
}

void RPN::_div()
{
	double a = _res.top();
	_res.pop();
	double b = _res.top();
	_res.pop();
	_res.push(b / a);
}

void RPN::_calculation(char symb) {
	if (_res.size() < 2)
		throw ErrorInput();
	if (symb == '+')
		_plus();
	if (symb == '-')
		_minus();
	if (symb == '*')
		_mult();
	if (symb == '/')
		_div();
}
