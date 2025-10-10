#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN& ref)
{
	*this=ref;
}

RPN::~RPN()
{
}

RPN&	RPN::operator=(const RPN& ref)
{
	if (this != &ref)
		_stack = ref._stack;
	return (*this);
}

bool isValidToken(char tok)
{
	return (isdigit(tok) || tok == '+' || tok == '-' || tok == '*' || tok == '/');
}

void RPN::calculate(char tok)
{
	if (_stack.size() < 2)
		throw std::runtime_error("Error");
	int nb1 = _stack.top(); _stack.pop();
	int nb2 = _stack.top(); _stack.pop();
	if (nb1 == 0 && tok == '/')
		throw std::runtime_error("divided by 0");
	switch (tok)
	{
		case ('+'): _stack.push(nb2 + nb1); return;
		case ('-'): _stack.push(nb2 - nb1); return;
		case ('*'): _stack.push(nb2 * nb1); return;
		case ('/'): _stack.push(nb2 / nb1); return;
	}
}

int RPN::execute(const std::string &expression)
{
	std::istringstream stream(expression);
	std::string str;
	while (std::getline(stream, str, ' '))
	{
		if (str.size() != 1 || !isValidToken(str[0]))
			throw std::runtime_error("Error");
		if (isdigit(str[0]))
			_stack.push(str[0] - '0');
		else
			calculate(str[0]);
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error");
	return (_stack.top());
}