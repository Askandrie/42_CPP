/**
 * @ Author: Aska
 * @ Create Time: 2025-05-12 18:41:04
 * @ Modified by: Aska
 * @ Modified time: 2025-05-13 11:44:06
 */
#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &input)
{
	// Exemple simplifié :
	double val = std::strtod(input.c_str(), NULL);

	// Conversion en char
	if (val < 0 || val > 127 || val != val) // gestion NaN
		std::cout << "char: impossible\n";
	else if (std::isprint(static_cast<int>(val)))
		std::cout << "char: '" << static_cast<char>(val) << "'\n";
	else
		std::cout << "char: Non affichable\n";

	// Conversion en int
	if (val < std::numeric_limits<int>::min() || val > std::numeric_limits<int>::max() || val != val)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(val) << "\n";

	// Conversion en float
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << "f\n";

	// Conversion en double
	std::cout << "double: " << val << "\n";
}
