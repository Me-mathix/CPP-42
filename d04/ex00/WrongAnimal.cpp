#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "[WrongAnimal] " << "create!!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string name ) : type(name)
{
	std::cout << "[WrongAnimal] " << "created with name " << name << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	*this=ref;
	std::cout << "[WrongAnimal] " << "copy!!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] " << "delete!!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ref)
{
	*this=ref;
	std::cout << "[WrongAnimal] " << "operator=!!" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "im an WrongAnimal im fake anyway" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
} 