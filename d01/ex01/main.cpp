#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie* Test;

	Test = zombieHorde(10 ,"caca");
	for (size_t i = 0; i < 10; i++)
	{
		Test[i].announce();
	}
	delete [] Test;
	return (1);
}