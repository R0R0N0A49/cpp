#pragma once

#include "iostream"
#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(Brain& copy);
		~Brain();
		Brain operator=(Brain& other);
		void setString(int, std::string);
		void printAll();
		void setNew(Brain& other);

	private:
		std::string _idea[100];
};
