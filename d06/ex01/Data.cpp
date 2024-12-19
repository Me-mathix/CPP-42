#include <string>

struct Data
{
	Data() : nom("Jean"), age(21) {} ;
	Data(int x, std::string str) : nom(str), age(x) {} ;
	std::string nom;
	int age;
};