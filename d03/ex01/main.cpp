#include "ScavTrap.hpp"

int main() {
    std::cout << BLUE << "Creating ScavTrap a with name \"BotA\"" << RESET << std::endl;
    ScavTrap a("BotA");

    std::cout << BLUE << "Creating ScavTrap b by copying a" << RESET << std::endl;
    ScavTrap b(a);

    std::cout << BLUE << "Creating ScavTrap c with default constructor" << RESET << std::endl;
    ScavTrap c;

    std::cout << BLUE << "Assigning b to c" << RESET << std::endl;
    c = b;

	b.setName("BotB");
	c.setName("BotC");
    
	std::cout << BLUE << "kepping the gate 1 by 1" << RESET << std::endl;
	a.guardGate();
	b.guardGate();
	c.guardGate();



    std::cout << BLUE << "Main function ends, destructors will be called automatically" << RESET << std::endl;
    return 0;
}