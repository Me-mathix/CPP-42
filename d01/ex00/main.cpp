#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie* Test;

	randomChump("STACK");
	Test = newZombie("HEAP");
	Test->announce();

	delete Test;
}