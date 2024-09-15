#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] " << "create!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref) : WrongAnimal()
{
	*this=ref;
	std::cout << "[WrongCat] " << "copy!!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] " << "delete!!" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	*this=ref;
	std::cout << "[WrongCat] " << "operator=!!" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Mehum hum Mehum hum" << std::endl;
}