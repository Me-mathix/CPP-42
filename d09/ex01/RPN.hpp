#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <sstream>
# include "stack"

class RPN
{
private:
	std::stack<int> _stack;

public:
	RPN();
	RPN(const RPN& ref);
	~RPN();

	RPN&	operator=(const RPN& ref);
	int execute(const std::string &expression);
	void calculate(char tok);

};

#endif