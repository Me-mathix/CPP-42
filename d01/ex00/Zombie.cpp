#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string &name): _name(name) {}

Zombie::~Zombie() 
{
	std::cout << this->_name << " deleted" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

