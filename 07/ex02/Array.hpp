/**
 * @ Author: Aska
 * @ Create Time: 2025-05-16 16:45:22
 * @ Modified by: Aska
 * @ Modified time: 2025-05-17 01:19:44
 */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T> class Array
{
  public:
	Array();
	Array(unsigned int n);
	Array(Array const &src);
	~Array();
	Array &operator=(Array const &src);
	T     &operator[](unsigned int index);

	unsigned int size() const;

  private:
	T           *_array;
	unsigned int _size;
};

#include "Array.tpp"

#endif