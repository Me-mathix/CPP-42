#include "Base.hpp"
#include <cstdlib>
#include <ctime>

void	testPtr() {
	Base	*ptr = generate();
	identify(*ptr);
	delete ptr;
}

void	testAdr() {
	Base	*ptr = generate();
	identify(ptr);
	delete ptr;
}

int	main() {
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		testPtr();

	for (int i = 0; i < 10; i++)
		testAdr();
}