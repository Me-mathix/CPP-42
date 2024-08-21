#include "Zombie.hpp"

int main()
{
	Zombie* Test;

	Test = zombieHorde(10 ,"JACK");
	for (size_t i = 0; i < 10; i++)
	{
		Test[i].announce();
	}
	delete [] Test;
	return (1);
}