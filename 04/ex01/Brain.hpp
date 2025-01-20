#pragma once

#include "iostream"
#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(Brain & copy);
		~Brain();
		Brain &operator=(Brain const& other);
		void setString(int, std::string);
		void printAll() const ;
		void setNew(Brain const& other);

	private:
		std::string _ideas[100];
};