#pragma once

#include <iostream>
#include <list>

class Span {
	public:
		Span(unsigned int N);
		Span(Span & cpy);
		Span &operator=(Span cpy);
		~Span();
		void addNumber(std::list<unsigned int> i);
		void addNumber(unsigned int i);
		unsigned int shortestSpan();
//		unsigned int longestSpan();

	private:
		Span();
		unsigned int const _N;
		std::list<unsigned int> _list;

	// add exception
	class FullException : public std::exception {
		const char * what() const throw() {
			return ("\033[1;38;2;200;50;75mYou can't add more numbers !");
		}
	};

	class NoNumbersException : public std::exception {
		const char * what() const throw() {
			return ("\033[1;38;2;200;50;75mlist don't have enough numbers !");
		}
	};

};