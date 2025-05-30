/**
 * @ Author: Aska
 * @ Create Time: 2025-05-27 02:25:55
 * @ Modified by: Aska
 * @ Modified time: 2025-05-27 03:03:45
 */

#include "Span.hpp"
#include <cstdlib>

int main()
{
	std::cout << "\033[33m"
	          << "Test vector container\n"
	          << "\033[0m";

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[33m"
	          << "Test vector range\n"
	          << "\033[0m";

	try
	{
		Span sp2 = Span(100);
		std::srand(time(NULL));
		for (int i = 0; i < 100; i++)
		{
			int random_int = rand() % 1000000;
			sp2.addNumber(random_int);
		}
		std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[33m"
	          << "Test vector large range\n"
	          << "\033[0m";

	Span sp3 = Span(100000);
	std::srand(time(NULL));
	for (int i = 0; i < 100000; i++)
	{
		int random_int = rand() % 1000000000;
		try
		{
			sp3.addNumber(random_int);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	try
	{
		std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}