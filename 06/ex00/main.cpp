/**
 * @ Author: Aska
 * @ Create Time: 2025-05-12 23:24:52
 * @ Modified by: Aska
 * @ Modified time: 2025-05-12 23:25:17
 */

#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <input>" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}