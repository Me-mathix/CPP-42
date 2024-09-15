#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] " << "create!!" << std::endl;
}

Dog::Dog(const Dog& ref) : Animal()
{
	*this=ref;
	std::cout << "[Dog] " << "copy!!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] " << "delete!!" << std::endl;
}

Dog&	Dog::operator=(const Dog& ref)
{
	*this=ref;
	std::cout << "[Dog] " << "operator=!!" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "BArk , Bark --" << std::endl;
}