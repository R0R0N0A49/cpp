#include "A.hpp"

Base *generate()
{
	int tmp = rand() % 3;
	if (!tmp)
		return new A();
	if (tmp == 1)
		return new B();
	return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "Base";
}

void identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch (const std::exception &e) {
		try
		{
			dynamic_cast<B&>(p);
			std::cout << "B";
		}
		catch (const std::exception &e)
		{
			try
			{
				dynamic_cast<C&>(p);
				std::cout << "C";
			}
			catch (const std::exception &e)
			{
				std::cout << "Base";
			}
		}
	}
}

int main()
{
	srand(time(0));
	std::cout << "\033[1;38;2;0;150;175m" << "test identify with A*" << "\033[1;m" << std::endl;

	Base *a = new A();
	std::cout << "*a is class ";
	identify(a);
	std::cout << std::endl;
	std::cout << "&a is class ";
	identify(*a);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;38;2;0;150;175m" << "test identify with B*" << "\033[1;m" << std::endl;

	Base *b = new B();
	std::cout << "*b is class ";
	identify(b);
	std::cout << std::endl;
	std::cout << "&b is class ";
	identify(*b);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;38;2;0;150;175m" << "test identify with C*" << "\033[1;m" << std::endl;

	Base *c = new C();
	std::cout << "*c is class ";
	identify(c);
	std::cout << std::endl;
	std::cout << "&c is class ";
	identify(*c);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;38;2;0;150;175m" << "test identify with generate()" << "\033[1;m" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		Base *p = generate();

		std::cout << "*p" << i << " is class ";
		identify(p);
		std::cout << std::endl;

		std::cout << "&p" << i <<" is class ";
		identify(*p);
		std::cout << std::endl;
		std::cout << std::endl;
		delete p;
	}
}
