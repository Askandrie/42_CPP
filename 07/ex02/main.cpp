/**
 * @ Author: Aska
 * @ Create Time: 2025-05-16 18:38:23
 * @ Modified by: Aska
 * @ Modified time: 2025-05-16 18:40:19
 */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> a(5);
	Array<int> b(5);
	Array<int> c(a);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;

	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i + 1;

	c = a;

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;
}