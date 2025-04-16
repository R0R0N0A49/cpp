#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack() {}

		MutantStack(const MutantStack<T>& other) {
			*this = other;
		}

		MutantStack<T>& operator=(const MutantStack<T>& other) {
			std::stack<T>::operator=(other);
			return *this;
		}

		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		const_iterator cbegin() { return this->c.begin(); }
		const_iterator cend() { return this->c.end(); }
};
