#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] " << "create!!" << std::endl;
}

Cat::Cat(const Cat& ref) : Animal()
{
	*this=ref;
	std::cout << "[Cat] " << "copy!!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] " << "delete!!" << std::endl;
}

Cat&	Cat::operator=(const Cat& ref)
{
	*this=ref;
	std::cout << "[Cat] " << "operator=!!" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow, Meow ^^" << std::endl;
}