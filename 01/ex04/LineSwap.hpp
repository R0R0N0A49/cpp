#ifndef LINESWAP_H
# define LINESWAP_H

# include <iostream>
# include <fstream>

class LineSwap
{
	public :
		LineSwap();
		LineSwap(std::string file);
		~LineSwap();
		void swap(std::string s1, std::string s2);

	private :
		std::ofstream _output;
		std::ifstream _input;
};

# endif