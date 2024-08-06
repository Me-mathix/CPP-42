#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << BLUE << "[ScavTrap] " << "create!!" << RESET << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << BLUE << "[ScavTrap] " << "create!!" << RESET << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
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
    this->setName(ref.getName());
	this->setHp(ref.getHp());
	this->setEp(ref.getEp());
	this->setAd(ref.getAd());
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << this->getName() << " are guarding the gate your safe" << RESET << std::endl;
}
