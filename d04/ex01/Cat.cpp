#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "[Cat] " << "create!!" << std::endl;
}

Cat::Cat(const Cat& ref) : Animal()
{
	*this=ref;
	std::cout << "[Cat] " << "copy!!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "[Cat] " << "delete!!" << std::endl;
}

Cat&	Cat::operator=(const Cat& ref)
{
	this->type = ref.getType();
	delete this->brain;
	this->brain = new Brain(*ref.brain);
	std::cout << "[Cat] " << "operator=!!" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow, Meow ^^" << std::endl;
}