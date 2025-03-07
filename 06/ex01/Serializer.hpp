#pragma once

#include <iostream>
#include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t ptr);

private:
	Serializer();
	Serializer(const Serializer& src);
	Serializer& operator=(Serializer const& src);
	~Serializer();
};
