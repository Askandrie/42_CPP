/**
 * @ Author: Aska
 * @ Create Time: 2025-05-17 18:50:58
 * @ Modified by: Aska
 * @ Modified time: 2025-05-17 19:03:56
 */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T> typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
	{
		throw std::runtime_error("Value not found");
	}
	return it;
}

#endif