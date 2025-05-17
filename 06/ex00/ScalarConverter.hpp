/**
 * @ Author: Aska
 * @ Create Time: 2025-05-12 18:15:13
 * @ Modified by: Aska
 * @ Modified time: 2025-05-12 23:57:43
 */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

#define DEFAULT_INPUT ""

class ScalarConverter
{
  public:
	static void convert(const std::string &input);

  private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &);
	ScalarConverter &operator=(const ScalarConverter &);
	~ScalarConverter();
};

#endif