#include "FragTrap.hpp"

int main() {
    std::cout << BLUE << "Creating FragTrap a with name \"BotA\"" << RESET << std::endl;
    FragTrap a("BotA");

    std::cout << BLUE << "Creating FragTrap b by copying a" << RESET << std::endl;
    FragTrap b(a);

    std::cout << BLUE << "Creating FragTrap c with default constructor" << RESET << std::endl;
    FragTrap c;

    std::cout << BLUE << "Assigning b to c" << RESET << std::endl;
    c = b;

	std::cout << BLUE << "high five 1 by 1" << RESET << std::endl;
	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();

    std::cout << BLUE << "Main function ends, destructors will be called automatically" << RESET << std::endl;
    return 0;
}