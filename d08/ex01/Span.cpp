#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N) : _max(N) 
{
}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span &Span::operator=(const Span &obj)
{
	this->_store = obj._store;
	this->_max = obj._max;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
	if (_max == _store.size())
		throw StoreFullException();
	_store.push_back(nb);
}

void Span::printSpan()
{
	for (size_t i = 0; i < _store.size(); i++)
	{
		std::cout << _store[i] << std::endl;
	}
}

int		Span::shortestSpan()
{
	if (_store.size() <= 1)
		throw ImpossibleSpanException();
	std::sort(_store.begin(), _store.end());
	int min = _store[_store.size() - 1] - _store[0];
	for (size_t i = 0; i < _store.size() - 1; i++)
	{
		if (_store[i + 1] - _store[i] < min)
			min = _store[i + 1] - _store[i];
	}
	return min;
}

int		Span::longestSpan()
{
	if (_store.size() <= 1)
		throw ImpossibleSpanException();
	std::sort(_store.begin(), _store.end());
	return _store[_store.size() - 1] - _store[0]; 
}

const char *Span::StoreFullException::what() const throw() {
	return "Store is full";
}

const char *Span::ImpossibleSpanException::what() const throw() {
	return "Not enough item to get a span";
}
