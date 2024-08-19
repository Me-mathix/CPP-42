#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	Harl harl;
	if (argc == 2)
		harl.complain(argv[1]);
	return 0;
}
