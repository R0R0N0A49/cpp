#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "\033[1;31m			Basic test\n\n";
	const Animal* j[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			j[i] = new Dog();
		else
			j[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		std::cout << "j[" << i << "] = " << j[i]->getType() << std::endl;

	for (int i = 0; i < 10; i++)
		delete(j[i]);

	std::cout << "\n\033[1;31m			Dog Operator test\n\n";

	Dog i = Dog();
	i.setString(0, "hello from first line\n");
	i.setString(2, "hello from third line\n");
	i.setString(4, "hello from fifth line\n");
	Dog* v = new Dog();
	*v = i;
	v->printAll();
	delete v;

	std::cout << "\n\033[1;31m			Cat Operator test\n\n";

	Cat c = Cat();
	c.setString(0, "hello from first line in C\n");
	c.setString(2, "hello from third line in C\n");
	c.setString(4, "hello from fifth line in C\n");
	Cat* h = new Cat();
	*h = c;
	h->printAll();
	std::cout << "\n\033[1;31m			End test\n\n";
	delete h;
	return 0;
}
