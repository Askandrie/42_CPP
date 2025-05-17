/**
 * @ Author: Aska
 * @ Create Time: 2025-05-16 17:38:14
 * @ Modified by: Aska
 * @ Modified time: 2025-05-17 15:05:41
 */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>

Array<T>::Array() : _array(0), _size(0)
{
}

template <typename T>

Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>

Array<T>::Array(Array const &src) : _array(new T[src.size()]), _size(src.size())
{
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>

Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>

Array<T> &Array<T>::operator=(Array const &src)
{
	if (this != &src)
	{
		delete[] _array;
		_size  = src.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	return *this;
}

template <typename T>

T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _array[index];
}

template <typename T>

unsigned int Array<T>::size() const
{
	return _size;
}

#endif