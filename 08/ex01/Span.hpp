/**
 * @ Author: Aska
 * @ Create Time: 2025-05-21 15:47:52
 * @ Modified by: Aska
 * @ Modified time: 2025-05-27 02:23:02
 */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

#define EXCEPTION_SPAN "Span is full, cannot add more numbers"
#define EXCEPTION_SPAN_EMPTY "Span cannot be empty on span construction"
#define EXCEPTION_SPAN_TOO_FEW "Span requires at least two numbers to calculate span"
#define DEFAULT_MAX_SIZE 1

class Span
{
  private:
	unsigned int     _maxSize;
	std::vector<int> _numbers;

  public:
	Span(unsigned int maxSize = DEFAULT_MAX_SIZE);
	Span(const Span &src);
	~Span();
	Span &operator=(const Span &src);

	int              shortestSpan() const;
	int              longestSpan() const;
	void             addNumber(int number);
	std::vector<int> getNumbers() const;

	class SpanFullException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return (EXCEPTION_SPAN);
		}
	};

	class SpanTooFewException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return (EXCEPTION_SPAN_TOO_FEW);
		}
	};

	class SpanEmptyException : public std::exception
	{
	  public:
		const char *what() const throw()
		{
			return (EXCEPTION_SPAN_EMPTY);
		}
	};
};

#endif