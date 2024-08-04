#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie user(name);

	user.announce();
	return ;
}