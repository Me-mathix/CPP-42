#include "Weapon.hpp"

Weapon::Weapon() : _type("") {}

Weapon::Weapon( std::string name ) : _type(name) {}


Weapon::~Weapon()
{

}

std::string const &Weapon::getType()
{
	return(this->_type);
}

void Weapon::setType( std::string name )
{
	this->_type = name;
}