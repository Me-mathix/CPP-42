#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include "Display.hpp"

enum convertType
{
	CHAR = 0,
	INT = 1,
	FLOAT = 2,
	DOUBLE = 3,
	NAN = 4,
	INF = 5,
	UNKNOWN = 6
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& ref);
		~ScalarConverter();

		ScalarConverter&	operator=(const ScalarConverter& ref);
	public:
		static void convert(const std::string &literal);
};

#endif