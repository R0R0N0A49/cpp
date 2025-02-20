#pragma once

#include <iostream>

class ScalarConverte {
	protected:
		ScalarConverte();
		ScalarConverte(ScalarConverte const& copy);
		ScalarConverte& operator=(ScalarConverte const& copy);
		~ScalarConverte();
	public:
		static void convert(std::string src);
};
