#include "PhoneBook.hpp"
#include "add.hpp"


int main(int argc, char **argv)
{
	std::string result;
	PhoneBook book;
	Contact write;

	while (1)
	{
		std::cout << "enter a choice" << std::endl << std::endl;
		std::getline(std::cin, result);
		if (result == "ADD")
			create_contact(book);
		if (result == "SEARCH")
			std::cout << "find nothing" << std::endl;
		if (result == "Write")
		{
			std::cout << "input ID" << std::endl;
			std::getline(std::cin, result);
			write = book.retrive_contact(std::atoi(result.c_str()));
			std::cout << write << std::endl;
		}
		if (result == "EXIT")
			break;
	}
}