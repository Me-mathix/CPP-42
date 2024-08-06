#include "ClapTrap.hpp"

int	main() {
	ClapTrap marc("marc");
	ClapTrap jean("jean");

	marc.attack("jean");
	
	jean.takeDamage(1);
	jean.beRepaired(2);
	jean.takeDamage(1);

	jean = marc;
	

	marc.beRepaired(1);
}