#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

//int main()
//{
//	Dog basic;
//	basic.setString(1, "I do not want to set the world on fire");
//	{
//		Dog tmp;
//		tmp = (basic);
//		tmp.setString(0, "Hello World");
//		std::cout << "BOB Brain : \n";
//		tmp.printAll();
//		std::cout << std::endl;
//	}
//	std::cout << "Default Brain : \n";
//	basic.printAll();
//	std::cout<< std::endl;
//}

int main(void)
{
	std::cout << "\033[1;38;2;200;90;50m" << "##########-Test-Brain-for-Cat-##########\n\n";
	{
		// assignation de valeur

		Cat* cat_1 = new Cat();

		cat_1->setString(0, "bonjour");

		Cat* cat_2 = new Cat(*cat_1);

		cat_1->setString(1, "ca va ?");

		cat_2->setString(2, "vous");
		cat_2->setString(99, "moi oui");

		// print et suppression de valeur

		std::cout << "\ncat(copy) : " << std::endl;
		cat_1->printAll();
		delete cat_1;
		std::cout << "\ncat() : " << std::endl;
		cat_2->printAll();
		delete cat_2;
	}
	std::cout << std::endl;
	std::cout << "\033[1;38;2;200;90;50m" << "##########-Test-Brain-for-Dog-##########\n\n";
	{
		// assignation de valeur

		Dog* dog_1 = new Dog();
		Dog* dog_2 = new Dog();

		dog_1->setString(0, "bonjour");
		std::cout << std::endl;
		*dog_2 = *dog_1;

		dog_1->setString(1, "ca va ?");

		dog_2->setString(99, "oui et vous ?");

		// print et suppression de valeur

		std::cout << "\nDog() : " << std::endl;
		dog_1->printAll();
		delete dog_1;
		std::cout << "\nDog(copy) : " << std::endl;
		dog_2->printAll();
		delete dog_2;
	}
	return 0;
}
