#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Base constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Name constructor called with name :" <<  name << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &ori )
{
	std::cout << "Copy constructor called With name : " << ori._name << std::endl;
	*this = ori;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &ori )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = ori._name;
	this->_hp = ori._hp;
	this->_ep = ori._ep;
	this->_ad = ori._ad;

	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0 || this->_ep == 0)
		return;
	this->_ep--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0 || this->_ep == 0)
		return;
	this->_hp -=  amount;
	std::cout << "ClapTrap " << this->_name << " take damage cauing him to loose " << amount << "  HP" << std::endl;
	std::cout << "ClapTrap " << this->_name << " have now " << this->_hp << "  HP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0 || this->_ep == 0)
		return;
	this->_ep--;
	this->_hp +=  amount;
	std::cout << "ClapTrap " << this->_name << " heals for " << amount << "  HP" << std::endl;
	std::cout << "ClapTrap " << this->_name << " have now " << this->_hp << "  HP" << std::endl;
}
