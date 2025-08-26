#pragma once

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {};
	MutantStack(const MutantStack& ref) : std::stack<T>(ref) {};
	~MutantStack() {};
	MutantStack&	operator=(const MutantStack& ref) {this->c = ref.c; return *this;};
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}
};