#include <iostream>
#include <iomanip>

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << BLUE << "[FragTrap] " << "create!!" << RESET << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << BLUE << "[FragTrap] " << "create!!" << RESET << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}


FragTrap::FragTrap(const FragTrap& ref)
{
	std::cout << BLUE << "[FragTrap] " << "copy!!" << RESET << std::endl;
	*this = ref;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "[FragTrap] " << "delete!!" << RESET << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << MAGENTA << "[FragTrap] " << "operator=!!" << RESET << std::endl;
    this->_name = ref._name;
	this->_hp = ref._hp;
	this->_ep = ref._ep;
	this->_ad = ref._ad;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW << this->_name << " giving a highfive" << RESET << std::endl;
}