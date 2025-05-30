/**
 * @ Author: Aska
 * @ Create Time: 2025-05-17 19:26:56
 * @ Modified by: Aska
 * @ Modified time: 2025-05-30 02:04:27
 */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
  public:
	MutantStack() {}

	MutantStack(const MutantStack &other) : std::stack<T>(other) {}

	MutantStack &operator=(const MutantStack &other)
	{
		if (this != &other)
		{
			std::stack<T>::operator=(other);
		}
		return *this;
	}

	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}
};

#endif