#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("CACA");
	return 0;
}
