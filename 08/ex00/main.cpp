/**
 * @ Author: Aska
 * @ Create Time: 2025-05-17 19:02:32
 * @ Modified by: Aska
 * @ Modified time: 2025-05-17 19:17:41
 */

#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <vector>

int main()
{

	std::list<int>   l;
	std::vector<int> v;
	std::deque<int>  d;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 20; i++)
	{
		l.push_back(i);
	}
	try
	{
		std::cout << *easyfind(l, 0) << std::endl;
		std::cout << *easyfind(l, 1000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 350; i++)
	{
		d.push_back(i);
	}

	try
	{
		std::cout << *easyfind(d, 349) << std::endl;
		std::cout << *easyfind(d, 560) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 5; i++)
	{
		v.push_back(i * 10); // 0, 10, 20, 30, 40
		l.push_back(i + 1);  // 1, 2, 3, 4, 5
	}

	return 0;
}