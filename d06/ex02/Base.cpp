#include "Base.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
	int random = std::rand() % 3;
	switch (random)
	{
		case 0: return new A;
		case 1: return new B;
		case 2: return new C;
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	{ 
		std::cout << "p is a A class using Ptr to recognize" << std::endl; 
		return;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "p is a B class using Ptr to recognize" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "p is a C class using Ptr to recognize" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try {
		dynamic_cast<A &>(p);
		std::cout << "p is a A class Ref to recognize" << std::endl;
		return;
	} catch (std::exception &e) {}
	try {
		dynamic_cast<B &>(p);
		std::cout << "p is a B class Ref to recognize" << std::endl;
		return;
	} catch (std::exception &e) {}
		try {
		dynamic_cast<C &>(p);
		std::cout << "p is a C class Ref to recognize" << std::endl;
		return;
	} catch (std::exception &e) {}
}