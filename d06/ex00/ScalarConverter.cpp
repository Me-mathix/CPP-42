#include <iostream>
#include <cctype>
#include <cstdlib>
#include <limits>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "[ScalarConverter] " << "create!!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& ref)
{
	*this=ref;
	std::cout << "[ScalarConverter] " << "copy!!" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "[ScalarConverter] " << "delete!!" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& ref)
{
	(void) ref;
	std::cout << "[ScalarConverter] " << "operator=!!" << std::endl;
	return (*this);
}

bool isOnlyDigit(std::string literal)
{
	int point = 0;
	int chara = 0;
	for (size_t i = 0; i < literal.size(); i++)
	{
		if (literal[i] == '.')
			point++;
		if (isalpha(literal[i]))
			chara++;
	}
	if (point == 1 && chara == 1 && literal[literal.size() - 1] == 'f')
		return true;
	else if (point == 1 && chara == 0)
		return true;
	else if (point == 0 && chara == 0)
		return true;
	return false ;
}

static convertType detect(std::string literal)
{
	if (literal == "nan" || literal == "nanf")
		return NAN;
	if (literal[0] == '-' || literal[0] == '+')
	{
		literal.erase(0,1);
		if (literal == "inf" || literal == "inff")
			return INF;
	}
	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
		return CHAR;
	else if (literal.find('.') == std::string::npos && isOnlyDigit(literal))
		return INT;
	else if (literal[literal.size() - 1] == 'f' && isOnlyDigit(literal))
		return FLOAT;
	else if (isOnlyDigit(literal))
		return DOUBLE;
	else
		return UNKNOWN;
	
}


void ScalarConverter::convert(const std::string &literal) 
{ 
	switch (detect(literal))
	{
		case CHAR:
			Display::character(literal[0]);
			break;
		case INT:
			if (std::atol(literal.c_str()) > std::numeric_limits<int>::max() || std::atol(literal.c_str()) < std::numeric_limits<int>::min())
			{
				std::cout << "Int Overflow detected no convertion available" << std::endl;
				break;
			}
			Display::integer(std::atoi(literal.c_str()));
			break;
		case FLOAT:
			if (std::atof(literal.c_str()) > std::numeric_limits<float>::max() || std::atof(literal.c_str()) < -std::numeric_limits<float>::max())
			{
				std::cout << std::atof(literal.c_str()) << "||" << std::numeric_limits<float>::min() << std::endl;
				std::cout << "Float Overflow detected no convertion available" << std::endl;
				break;
			}
			Display::floatNumber(static_cast<float>(std::atof(literal.c_str())));
			break;
		case DOUBLE:
			if (std::strtod(literal.c_str(), NULL) > std::numeric_limits<double>::max() || std::strtod(literal.c_str(), NULL) < -std::numeric_limits<double>::max())
			{
				std::cout << "double Overflow detected no convertion available" << std::endl;
				break;
			}
			Display::doubleNumber(std::strtod(literal.c_str(), NULL));
			break;
		case NAN:
			Display::nan();
			break;
		case INF:
			Display::inf(literal);
			break;
		case UNKNOWN:
			std::cout << "this string have no converstion available";
			break;
	}
}