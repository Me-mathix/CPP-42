#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact _contact_list[8];
		int _next_contact;
	public:
		PhoneBook();
		~PhoneBook();
		void add_to_phonebook(Contact newcontact);
		Contact retrive_contact(int id);
};


#endif