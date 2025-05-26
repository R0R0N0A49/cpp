#include <list>

#include "MutantStack.hpp"

int main() {

	MutantStack<int> mstack;
	std::list<int> lstack;

	std::cout << "Add 5 and 17 in MutantStack(mstack) and in list(lstack)" << std::endl;
	mstack.push(5);
	mstack.push(17);

	lstack.push_back(5);
	lstack.push_back(17);

	std::cout << "\033[1;38;2;25;75;220mFirst element: (mstack | lstack)\033[1;m" << std::endl;
	std::cout << mstack.top() << " | " << lstack.back() << std::endl;

	mstack.pop();

	lstack.pop_back();

	std::cout << std::endl;

	std::cout << "\033[1;38;2;25;75;220msize after one pop :\033[1;m" << std::endl;
	std::cout << mstack.size() << " | " << lstack.size() << std::endl;
	std::cout << "\033[1;38;2;25;75;220mFirst element after one pop :\033[1;m" << std::endl;
	std::cout << mstack.top() << " | " << lstack.back() << std::endl;

	std::cout << std::endl << "Add 4 number in MutantStack(mstack) and in list(lstack)" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	std::list<int>::iterator lit = lstack.begin();

	std::cout << std::endl;
	std::cout << "\033[1;38;2;25;75;220mTest iterator:\033[1;m" << std::endl;
	while (it != mstack.end())
	{
		std::cout << *it;
		if (lit != lstack.end()) {
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
