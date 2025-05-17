/**
 * @ Author: Aska
 * @ Create Time: 2025-05-14 17:33:58
 * @ Modified by: Aska
 * @ Modified time: 2025-05-14 17:41:34
 */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap(T &a, T &b)
{
	T temp = a;
	a      = b;
	b      = temp;
}

template <typename T> const T &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <typename T> const T &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif