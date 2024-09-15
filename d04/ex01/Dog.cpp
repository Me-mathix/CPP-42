#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "[Dog] " << "create!!" << std::endl;
}

Dog::Dog(const Dog& ref) : Animal()
{
	*this=ref;
	std::cout << "[Dog] " << "copy!!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "[Dog] " << "delete!!" << std::endl;
}

Dog&	Dog::operator=(const Dog& ref)
{
	this->type = ref.getType();
	delete this->brain;
	this->brain = new Brain(*ref.brain);
	std::cout << "[Dog] " << "operator=!!" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "BArk , Bark --" << std::endl;
}

void Dog::thinking() const
{
	this->brain->displayIdeas();
}