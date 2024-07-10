#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	for (size_t i = 1; i < argc; i++)
	{
		for (size_t j = 0; argv[i][j]; j++)
			cout << char(toupper(argv[i][j]));
	}
}