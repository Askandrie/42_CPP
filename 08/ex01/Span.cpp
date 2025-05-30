/**
 * @ Author: Aska
 * @ Create Time: 2025-05-26 18:39:42
 * @ Modified by: Aska
 * @ Modified time: 2025-05-27 02:24:17
 */

#include "Span.hpp"

#include <algorithm>
#include <climits>
#include <iostream>
#include <iterator>

Span::Span(unsigned int maxSize) : _maxSize(maxSize)
{
	if (maxSize == 0)
		throw SpanEmptyException();
}

Span::Span(const Span &src) : _maxSize(src._maxSize), _numbers(src._numbers) {}

Span::~Span() {}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_maxSize = src._maxSize;
		_numbers = src._numbers;
	}
	return *this;
}

int Span::shortestSpan() const
{

	if (_numbers.size() < 2)
		throw SpanTooFewException();

	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int minSpan = INT_MAX;
	for (size_t i = 0; i < sortedNumbers.size(); ++i)
	{
		int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw SpanTooFewException();

	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw SpanFullException();
	_numbers.push_back(number);
}

std::vector<int> Span::getNumbers() const
{
	return _numbers;
}