
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static void	testCopy() {
	Dog	*dog1 = new Dog;
	Dog	*dog2 = new Dog;

	std::cout << std::endl << "IDEAS BEFORE COPY" << std::endl;
	std::cout << std::endl << "DOG 1 IDEAS" << std::endl;
	dog1->thinking();
	std::cout << std::endl << "DOG 2 IDEAS" << std::endl;
	dog2->thinking();
	*dog1 = *dog2;
	std::cout << std::endl << "IDEAS AFTER COPY" << std::endl;
	std::cout << std::endl << "DOG 1 IDEAS" << std::endl;
	dog1->thinking();
	delete dog1;
	std::cout << std::endl << "DOG 2 IDEAS" << std::endl;
	dog2->thinking();
	delete dog2;
}

int main( void )
{
	Animal animal;
	
	Animal *all[50];
	for (size_t i = 0; i < 50; i++)
	{
		if (i < (50 / 2))
			all[i] = new Dog();
		else
			all[i] = new Cat();
	}
	
	for (size_t i = 0; i < 50; i++)
		delete all[i];

	testCopy();

	return 0;
}