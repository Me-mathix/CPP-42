#include "Zombie.hpp"

int main()
{
	Zombie* Test;

	randomChump("STACK");
	Test = newZombie("HEAP");
	Test->announce();

	delete Test;
}