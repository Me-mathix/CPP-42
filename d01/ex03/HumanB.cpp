#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if ((this->_weapon == NULL) || (this->_weapon->getType() == ""))
	{
		std::cout << this->_name << " attacks with nothing " << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}