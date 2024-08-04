#include "add.hpp"
#include "PhoneBook.hpp"

bool is_digits(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void create_contact(PhoneBook &book)
{
	std::string result[5];

	std::cout << "Your on the point to add a new contact follow the instruction under :" << std::endl;
	std::cout << std::endl;
	while (result[0].size() == 0)
	{
		std::cout << "Whats the Last Name :" << std::endl;
		std::getline(std::cin, result[0]);
	}
	while (result[1].size() == 0)
	{
		std::cout << "Whats the First Name :" << std::endl;
		std::getline(std::cin, result[1]);
	}
	while (result[2].size() == 0)
	{
		std::cout << "Whats the Nickname :" << std::endl;
		std::getline(std::cin, result[2]);
	}
	while (result[3].size() == 0 || !is_digits(result[3]))
	{
		std::cout << "Whats the PhoneNumber :" << std::endl;
		std::getline(std::cin, result[3]);
		if (!is_digits(result[3]))
			std::cout << "only digits allowed" << std::endl;
	}
	while (result[4].size() == 0)
	{
		std::cout << "Now SHHHHHHHH whats his darkest secret :" << std::endl;
		std::getline(std::cin, result[4]);
	}
	Contact newcontact(result[0], result[1], result[2], result[3], result[4], true);
	book.add_to_phonebook(newcontact);
}
