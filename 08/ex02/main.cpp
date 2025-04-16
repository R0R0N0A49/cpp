#include <list>

#include "MutantStack.hpp"

int main() {

	MutantStack<int> mstack;
	std::list<int> lstack;

	mstack.push(5);
	mstack.push(17);

	lstack.push_back(5);
	lstack.push_back(17);

	std::cout << "First element: (mstack | lstack)" << std::endl;
	std::cout << mstack.top() << " | " << lstack.back() << std::endl;

	mstack.pop();

	lstack.pop_back();

	std::cout << std::endl;

	std::cout << "size after one pop :" << std::endl;
	std::cout << mstack.size() << " | " << lstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();

	++it;
	--it;

	++lit;
	--lit;

	std::cout << std::endl;

	std::cout << "Test iterator:" << std::endl;
	while (it != ite)
	{
		std::cout << *it;
		if (lit != lite) {
			std::cout << " | " << *lit;
			++lit;
		}
		std::cout << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::list<int> c(lstack);
	return 0;
}
