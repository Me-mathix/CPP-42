#include "add.hpp"
#include "PhoneBook.hpp"

void create_contact(PhoneBook &book)
{
	std::string result[5];

	std::cout << "Your on the point to add a new contact follow the instruction under :" << std::endl;
	std::cout << std::endl;
	std::cout << "Whats the Last Name :" << std::endl;
	std::getline(std::cin, result[0]);
	std::cout << "Whats the First Name :" << std::endl;
	std::getline(std::cin, result[1]);
	std::cout << "Whats the Nickname :" << std::endl;
	std::getline(std::cin, result[2]);
	std::cout << "Whats the PhoneNumber :" << std::endl;
	std::getline(std::cin, result[3]);
	std::cout << "Now SHHHHHHHH whats his darkest secret :" << std::endl;
	std::getline(std::cin, result[4]);
	
	Contact newcontact(result[0], result[1], result[2], result[3], result[4]);
	book.add_to_phonebook(newcontact);
}