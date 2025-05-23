#include "PMergeMe.hpp"


int main(int argc, char ** argv)
{
	if (argc < 2)
	{
		std::cerr << "\033[1;38;2;200;50;75mPMerge me need one number as an argument\033[1;m" << std::endl;
		return 1;
	}
	if (argc > 2)
		system("clear");
	PMergeMe tmp;

	tmp.process(argc, argv);
	return 0;
}
