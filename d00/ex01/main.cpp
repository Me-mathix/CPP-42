/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:53:44 by mda-cunh          #+#    #+#             */
/*   Updated: 2024/08/20 14:53:45 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Add.hpp"
#include <cstdlib>

void	diplay_shortbook(PhoneBook book)
{
	Contact		usage;
	std::string	result;
	std::string	tmp;
	std::cout << "    ID    |First Name|Last  Name| Nickname |" << std::endl;
	std::cout << "          |          |          |          |" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		result.clear();
		usage = book.retrive_contact(i);
		if (usage.exist() == false)
			break;
	
		for (size_t y = 0; y < 3; y++)
		{
			tmp = usage.retrive_information(y);
			if (tmp.length() > 10)
				tmp = tmp.substr(0, 9) + ".";
			else
			{
				for (size_t k = tmp.length(); k < 10; k++)
					result += " ";
			}
			result += tmp +  "|";
		}
		std::cout << "    " << (i + 1) << "     " << "|" << result << std::endl;
	}
}

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	std::string result;
	PhoneBook book;
	Contact write;
	int result_id;

	while (1)
	{
		std::cout << "enter a choice" << std::endl << std::endl;
		if (!std::getline(std::cin, result))
			return 1;
		if (result == "ADD")
			create_contact(book);
		else if (result == "SEARCH")
		{
			diplay_shortbook(book);
			std::cout << "input ID" << std::endl;
			if (!std::getline(std::cin, result))
				return 1;
			result_id = std::atoi(result.c_str());
			if (result_id < 1 || result_id > 8)
			{
				std::cout << "Invalid id" << std::endl;
				continue;
			}
			write = book.retrive_contact(result_id - 1);
			if (write.exist() == false)
			{
				std::cout << "does not exist" << std::endl;
				continue;
			}
			for (size_t i = 0; i < 5; i++)
			{
				std::cout << write.retrive_information(i) << std::endl;
			}
			std::cout << "Press Enter to continue..." << std::endl;
			std::cin.ignore();
		}
		else if (result == "EXIT")
			break ;
	}
	return (0);
}