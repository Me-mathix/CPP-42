#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {_next_contact = 0;}

PhoneBook::~PhoneBook() {}

void PhoneBook::add_to_phonebook(Contact newcontact)
{
	if (_next_contact == 8)
		_next_contact = 0;
	_contact_list[_next_contact] = newcontact;
	_next_contact += 1;
	std::cout << "new contact have been added on ID : " <<  _next_contact - 1 << std::endl;
}

Contact PhoneBook::retrive_contact(int id)
{
	return this->_contact_list[_next_contact];
}