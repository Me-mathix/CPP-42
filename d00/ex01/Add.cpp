/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:37:26 by mda-cunh          #+#    #+#             */
/*   Updated: 2024/08/20 11:56:46 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Add.hpp"
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

std::string retrieve_number(std::string inpt)
{
	std::string instring;
	
	while (instring.size() == 0 || !is_digits(instring))
	{
		std::cout << "Whats the " << inpt + " :" << std::endl;
		if (!std::getline(std::cin, instring))
			return ("ERROR");
	}
	return (instring);
}

std::string retrieve_information(std::string inpt)
{
	std::string instring;
	
	while (instring.size() == 0)
	{
		std::cout << "Whats the " << inpt + " :" << std::endl;
		if (!std::getline(std::cin, instring))
			return ("ERROR");
	}
	return (instring);
}

void create_contact(PhoneBook &book)
{
	std::string result[5];

	std::cout << "You're on the point to add a new contact follow the instructions under :" << std::endl;
	std::cout << std::endl;
	result[0] = retrieve_information("Last Name");
	result[1] = retrieve_information("First Name");
	result[2] = retrieve_information("Nickname");
	result[3] = retrieve_number("Phone Number");
	result[4] = retrieve_information("Darkest Secret");
	if (result[0] == "ERROR" || result[1] == "ERROR" || result[2] == "ERROR" || result[3] == "ERROR" || result[4] == "ERROR")
		return ;
	Contact newcontact(result[0], result[1], result[2], result[3], result[4], true);
	book.add_to_phonebook(newcontact);
}
