/**
 * @ Author: Aska
 * @ Create Time: 2025-05-14 17:33:58
 * @ Modified by: Aska
 * @ Modified time: 2025-05-16 16:51:38
 */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void iter(T *array, int length, void (*f)(const T &))
{
	for (int i = 0; i < length; ++i)
	{
		f(array[i]);
	}
}

#endif