/**
 * @ Author: Aska
 * @ Create Time: 2025-05-14 17:43:48
 * @ Modified by: Aska
 * @ Modified time: 2025-05-15 03:04:54
 */

#include <iostream>

#include "iter.hpp"

void display0(int const &i)
{
	std::cout << i << 0 << std::endl;
}

template <typename T> void display0T(T const &t)
{
	std::cout << t << std::endl;
}

int main(void)
{
	int tab[4] = {1, 2, 3, 4};

	iter(tab, 4, display0);
	iter(tab, 4, display0T);

	std::string ts[3] = {"Salut", "Ca", "Va ?"};

	iter(ts, 3, display0T);
}