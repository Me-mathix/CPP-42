#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "[Animal] " << "create!!" << std::endl;
}

Animal::Animal( std::string name ) : type(name)
{
	std::cout << "[Animal] " << "created with name " << name << std::endl;
}

Animal::Animal(const Animal& ref)
{
	*this=ref;
	std::cout << "[Animal] " << "copy!!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] " << "delete!!" << std::endl;
}

Animal&	Animal::operator=(const Animal& ref)
{
	*this=ref;
	std::cout << "[Animal] " << "operator=!!" << std::endl;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "im an Animal i dont have any sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
} 