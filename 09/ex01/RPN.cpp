#include "RPN.hpp"

RPN::RPN(std::string src) {
	std::string::iterator it = src.end();
	char c = 'a';
	for (it--; it != src.begin(); it--)
	{
		if (!std::isdigit(*it) && *it != '/' && *it != '*' && *it != '+' && *it != '-' && *it != ' ')
			throw Error();
		if (std::isdigit(*it) && std::isdigit(c)) {
			long tmp = _getCalculation(*it - '0', _symb.top(), c - '0');
			_nmb.pop();
			_symb.pop();
			_nmb.push((int)tmp);
		}
		else if (std::isdigit(*it)) {
			c = *it;
			_nmb.push((*it) - '0');
		} else if (*it != ' ') {
			c = *it;
			_symb.push(*it);
		}
	}

	// for the first char
	if (!std::isdigit(*it) && *it != '/' && *it != '*' && *it != '+' && *it != '-' && *it != ' ')
		throw Error();
	if (std::isdigit(*it))
		_nmb.push((*it) - '0');
	else if (*it != ' ')
		_symb.push(*it);
}

RPN::~RPN() {
}

void RPN::start() {
	if (_nmb.empty() || _symb.empty() ||  _symb.size() != (_nmb.size() - 1))
		throw Error();

	long rsl = _nmb.top();
	_nmb.pop();

	try {
		for (; !_nmb.empty();) {
			rsl = _getCalculation(rsl, _symb.top(), _nmb.top());
			_symb.pop();
			_nmb.pop();
		}
		std::cout << rsl << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

}

long RPN::_getCalculation(long first, char symb, int second) {
	if (symb == '+')
		return first + second;
	if (symb == '-')
		return first - second;
	if (symb == '*')
		return first * second;
	if (symb == '/') {
		if (second == 0)
			throw Error();
		return first / second;
	}
	throw Error();
}
