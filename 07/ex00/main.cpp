#include "whatever.hpp"

int main() {
	int i = 89012;
	int j = 89234;
	double ii = j / i - 10.5;
	double jj = j % i - 0.5;
	std::string str = "bonjour";
	std::string rts = "salut";

	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "ii = " << ii << std::endl;
	std::cout << "jj = " << jj << std::endl;
	std::cout << "str = " << str << std::endl;
	std::cout << "rts = " << rts << std::endl << std::endl;

	std::cout << "\033[1;38;2;0;150;175m" << "Swap i and j" << "\033[1;m" << std::endl << std::endl;
	::swap(i, j);
	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
	std::cout << "max(i, j) = " << ::max(i, j) << std::endl << std::endl;

	std::cout << "\033[1;38;2;0;150;175m" << "Swap ii and jj" << "\033[1;m" << std::endl << std::endl;
	::swap(ii, jj);
	std::cout << "ii = " << ii << std::endl;
	std::cout << "jj = " << jj << std::endl;
	std::cout << "min(ii, jj) = " << ::min(ii, jj) << std::endl;
	std::cout << "max(ii, jj) = " << ::max(ii, jj) << std::endl << std::endl;

	std::cout << "\033[1;38;2;0;150;175m" << "Swap str and rts" << "\033[1;m" << std::endl << std::endl;
	::swap(str, rts);
	std::cout << "str = " << str << std::endl;
	std::cout << "rts = " << rts << std::endl;
	std::cout << "min(str, rts) = " << ::min(str, rts) << std::endl;
	std::cout << "max(str, rts) = " << ::max(str, rts) << std::endl;

};
