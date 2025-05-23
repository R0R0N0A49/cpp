#include "PMergeMe.hpp"

PMergeMe::PMergeMe()
{
}

PMergeMe::PMergeMe(const PMergeMe& other)
{
	*this = other;
}

PMergeMe& PMergeMe::operator=(const PMergeMe& other)
{
	this->_vec = other._vec;
	this->_deq = other._deq;
	this->_pairs = other._pairs;
	this->_deqFinal = other._deqFinal;
	this->_vecFinal = other._vecFinal;
	return *this;
}

PMergeMe::~PMergeMe()
{
}

void PMergeMe::process(int ac, char** av)
{
	try
	{
		_parsImput(ac, av);
		_createPairs();
		startDeq = clock();
		_GetMinInPairsDeq();
		_insertDeqMax();
		endDeq = clock();
		startVec = clock();
		_GetMinInPairsVec();
		_insertVecMax();
		endVec = clock();
		_displayResult();
	}
	catch (std::exception& e)
	{
		std::cerr << "\033[1;38;2;200;50;75m" << e.what() << "\033[1;m" << std::endl;
	}
}

void PMergeMe::_parsImput(int ac, char** av)
{
	try
	{
		for (int i = 1; i < ac; i++)
		{
			_verifyNumber(av[i]);
			_vec.push_back(std::atoi(av[i]));
			_deq.push_back(std::atoi(av[i]));
		}
		if (_isSorted())
			throw std::runtime_error("Input is already sorted !");
	}
	catch (std::exception& e)
	{
		throw std::runtime_error(e.what());
	}
}

void	PMergeMe::_verifyNumber(std::string str)
{
	if (str.empty())
		throw std::runtime_error("Input can't be null");
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			throw std::runtime_error("Input error : " + str);
	}
}

bool PMergeMe::_isSorted() {
	for (std::size_t i = 1; i < _vec.size(); ++i) {
		if (_vec[i - 1] > _vec[i]) return false;
	}
	return true;
}

void PMergeMe::_createPairs()
{
	for (size_t i = 0; i < _vec.size(); i += 2)
	{
		if (i + 1 >= _vec.size())
			_pairs.push_back(std::make_pair(-1, _vec[i]));
		else
			_pairs.push_back(std::make_pair(std::min(_vec[i], _vec[i + 1]), std::max(_vec[i], _vec[i + 1])));
	}
}

void PMergeMe::_GetMinInPairsVec()
{
	for (std::vector<std::pair<int, int> >::iterator it = _pairs.begin(); it != _pairs.end(); it++)
	{
		_vecFinal.push_back(it->first);
	}
}

void PMergeMe::_GetMinInPairsDeq()
{
	for (std::vector<std::pair<int, int> >::iterator it = _pairs.begin(); it != _pairs.end(); it++)
	{
		_deqFinal.push_back(it->first);
	}
}

void PMergeMe::_insertVecMax()
{
	std::sort(_vecFinal.begin(), _vecFinal.end());
	for (std::vector<std::pair<int, int > >::iterator it = _pairs.begin(); it != _pairs.end(); it++)
		_vecFinal.insert(std::lower_bound(_vecFinal.begin(), _vecFinal.end(), it->second), it->second);
	if (_vecFinal[0] < 0)
		_vecFinal.erase(_vecFinal.begin());
}

void PMergeMe::_insertDeqMax()
{
	std::sort(_deqFinal.begin(), _deqFinal.end());
	for (std::vector<std::pair<int, int > >::iterator it = _pairs.begin(); it != _pairs.end(); it++)
		_deqFinal.insert(std::lower_bound(_deqFinal.begin(), _deqFinal.end(), it->second), it->second);
	if (_deqFinal[0] < 0)
		_deqFinal.erase(_deqFinal.begin());
}

void	PMergeMe::_displayResult()
{
	std::cout << "\033[1;38;2;50;200;75mFor " << _vec.size() << " number with vector : (" << 1000.0 * (endVec - startVec) / CLOCKS_PER_SEC << "ms)\033[1;m" << std::endl;
	for (std::vector<int>::iterator it = _vecFinal.begin(); it != _vecFinal.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl << "\033[1;38;2;50;75;200mFor " << _deq.size() << " number with deque : (" << 1000.0 * (endDeq - startDeq) / CLOCKS_PER_SEC << "ms)\033[1;m" << std::endl;
	for (std::deque<int>::iterator it = _deqFinal.begin(); it != _deqFinal.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
