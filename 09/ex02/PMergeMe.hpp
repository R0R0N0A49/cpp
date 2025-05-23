#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

class PMergeMe
{
private:
	std::vector<int> _vec;
	std::deque<int> _deq;
	std::vector< std::pair<int, int> > _pairs;
	std::vector<int> _vecFinal;
	std::deque<int> _deqFinal;
	clock_t	startVec;
	clock_t	endVec;
	clock_t	startDeq;
	clock_t	endDeq;

public:
	PMergeMe();
	~PMergeMe();
	PMergeMe(const PMergeMe& other);
	PMergeMe &operator=(const PMergeMe &other);

	void	process(int ac, char **av);

private:
	bool	_isSorted();
	void	_verifyNumber(std::string imput);
	void	_parsImput(int ac, char **av);
	void	_createPairs();
	void	_GetMinInPairsVec();
	void	_GetMinInPairsDeq();
	void	_insertVecMax();
	void	_insertDeqMax();
	void	_displayResult();
};