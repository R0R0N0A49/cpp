#pragma once

#include <iostream>
#include <new>

template<class T>
class Array {
	private:
		T *_content;
		const unsigned long _size;

	public:
		Array() : _size(0) {};
		Array(unsigned int n) : _size(n) { _content = new T[n];};
		Array(Array const &copy) : _size(copy._size) {
			_content = new T[copy._size];
			for (unsigned long i = 0; i < _size; i++)
				_content[i] = copy._content[i];
		};
		~Array() {
			delete [] _content;
		};
		Array *operator=(Array const &copy) {
			if (*this == copy)
				return *this;
			delete [] _content;
			_content = new T[copy._size];
			const_cast<unsigned long&>(_size) = copy._size;
			for (unsigned long i = 0; i < _size; i++)
				_content[i] = copy._content[i];
			return *this;
		};
		T operator[](unsigned int src) { return _content[src];};
		unsigned long size() {return _size; };
		// add exception
};
