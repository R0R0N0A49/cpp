#pragma once

#include <iostream>
#include <new>

template<class T>
class Array {
	private:
		T *_content;
		const unsigned long _size;

	public:
		Array() : _size(0) { this->_content = NULL; };

		Array(unsigned long n) : _size(0){
			const_cast<unsigned long&>(_size) = n;
			this->_content = new(std::nothrow) T[n];
			if (!this->_content)
				throw Fail(); // faire verifier avec un N = -
		};

		Array(Array const &copy) : _size(copy._size) {
			_content = new(std::nothrow) T[copy._size];
			if (!this->_content)
				throw Fail();
			for (unsigned long i = 0; i < _size; i++)
				_content[i] = copy._content[i];
		};

		~Array() {
			delete [] _content;
		};

		Array<T> *operator=(Array<T> const &copy) {
			if (this == copy)
				return *this;
			if (this->_content != NULL)
				delete [] _content;
			_content = new(std::nothrow) T[copy._size];
			if (!this->_content)
				throw Fail();
			const_cast<unsigned long&>(_size) = copy._size;
			for (unsigned long i = 0; i < _size; i++)
				_content[i] = copy._content[i];
			return *this;
		};

		T &operator[](unsigned long idx) {
			if (idx >= this->_size) {
				throw OutOfBounds();
			}
			return this->_content[idx];
		};

		unsigned long size() {
			return _size;
		};

class OutOfBounds : public std::exception {
	const char * what() const throw() {
		return ("\033[1;38;2;200;50;75mIndex too big\033[1;m");
	}
};

class Fail : public std::exception {
	const char * what() const throw() {
		return ("\033[1;38;2;200;50;75mAllocation fail\033[1;m");
	}
};

};
