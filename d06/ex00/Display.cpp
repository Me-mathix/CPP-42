#include <iostream>
#include <limits>
#include "Display.hpp"

Display::Display()
{
	std::cout << "[Display] " << "create!!" << std::endl;
}

Display::Display(const Display& ref)
{
	*this=ref;
	std::cout << "[Display] " << "copy!!" << std::endl;
}

Display::~Display()
{
	std::cout << "[Display] " << "delete!!" << std::endl;
}

Display&	Display::operator=(const Display& ref)
{
	*this=ref;
	std::cout << "[Display] " << "operator=!!" << std::endl;
	return (*this);
}

void Display::character(char c)
{
	std::cout << "char: " << c << "\n";
	std::cout << "int: " << static_cast<int>(c) << "\n";
	std::cout << "float: " << static_cast<float>(c) << ".0f\n";
	std::cout << "double: " << static_cast<double>(c) << ".0\n";
}

void Display::integer(int i)
{
	if (i > std::numeric_limits<char>::max() || i < std::numeric_limits<char>::min()) 
	{
		std::cout << "char: Overflow\n";
	} 
	else 
	{
		char c = static_cast<char>(i);
		if (std::isprint(c)) {
			std::cout << "char: '" << c << "'\n";
		} else {
			std::cout << "char: Non displayable\n";
		}
	}
	std::cout << "int: " << static_cast<int>(i) << "\n";
	std::cout << "float: " << static_cast<float>(i);
	if (static_cast<int>(static_cast<float>(i)) - i == 0) 
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i);
	if (static_cast<int>(static_cast<float>(i)) - i == 0) 
		std::cout << ".0\n";
}

void Display::floatNumber(float f)
{
	if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min()) {
		std::cout << "char: Overflow\n";
	} 
	else 
	{
		char c = static_cast<char>(f);
		if (std::isprint(c)) {
			std::cout << "char: '" << c << "'\n";
		} else {
			std::cout << "char: Non displayable\n";
		}
	}
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min()) {
		std::cout << "int: Overflow\n";
	}
	else
	{
		std::cout << "int: " << static_cast<int>(f) << "\n";
	}
	std::cout << "float: " << static_cast<float>(f) << "f\n";
	std::cout << "double: " << static_cast<double>(f) << "\n";
}

void Display::doubleNumber(double d)
{
	if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min()) {
		std::cout << "char: Overflow\n";
	} 
	else 
	{
		char c = static_cast<char>(d);
		if (std::isprint(c)) {
			std::cout << "char: '" << c << "'\n";
		} else {
			std::cout << "char: Non displayable\n";
		}
	}
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min()) {
		std::cout << "int: Overflow\n";
	}
	else
	{
		std::cout << "int: " << static_cast<int>(d) << "\n";
	}
	if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min()) {
		std::cout << "float: Overflow\n";
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f\n";
	}
	std::cout << "double: " << static_cast<double>(d) << "\n";
}

void Display::nan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void Display::inf(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: " << str << std::endl;
}