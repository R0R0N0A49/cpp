#include "Serializer.hpp"

int main(int argc, char **argv)
{
	Data *data = new Data();
	uintptr_t tmp;

	if (argc < 2)
		data->name = "Hello World!";
	else
		data->name = argv[1];
	std::cout << std::endl;
	std::cout << "Data.name = " << data->name << std::endl;
	std::cout << "Address Data.name = " << data << std::endl;
	std::cout << std::endl;
	tmp = Serializer::serialize(data);
	std::cout << "Serializer Data.name = " << tmp << std::endl;
	std::cout << std::endl;
	std::cout << "DeSerializer Data.name = " << Serializer::deserialize(tmp)->name << std::endl;
	std::cout << "Address DeSerializer Data.name = " << Serializer::deserialize(tmp) << std::endl;
	return 0;
}

