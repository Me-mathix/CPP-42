#pragma once

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
private:
	unsigned int _max;
	std::vector<int> _store;
	Span();
public:
	Span(unsigned int N);
	Span(const Span &obj);
	Span &operator=(const Span &obj);
	~Span();
	void 	addNumber(int nb);
	int		shortestSpan();
	int		longestSpan();
	void 	printSpan();
	template <typename iter>
	void 	addNumbers(iter start, iter end)
	{
		_store.insert(_store.end(), start, end);
	}
	class StoreFullException: public std::exception {
		virtual const char *what() const throw();
	};

	class ImpossibleSpanException: public std::exception {
		virtual const char *what() const throw();
	};
};

