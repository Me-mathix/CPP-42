#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << BLUE << "[ScavTrap] " << "create!!" << RESET << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << BLUE << "[ScavTrap] " << "create!!" << RESET << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}


ScavTrap::ScavTrap(const ScavTrap& ref)
{
	std::cout << BLUE << "[ScavTrap] " << "copy!!" << RESET << std::endl;
	*this = ref;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "[ScavTrap] " << "delete!!" << RESET << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << MAGENTA << "[ScavTrap] " << "operator=!!" << RESET << std::endl;
    this->_name = ref._name;
	this->_hp = ref._hp;
	this->_ep = ref._ep;
	this->_ad = ref._ad;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << this->_name << " are guarding the gate your safe" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp == 0 || this->_ep == 0)
		return;
	this->_ep--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
}