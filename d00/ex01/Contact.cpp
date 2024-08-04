#include "Contact.hpp"


Contact::Contact() : _initialized(false) {}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname,
			std::string phonenumber, std::string darkestsecret, bool init)
			: _firstname(firstname), _lastname(lastname), _nickname(nickname),
			_phonenumber(phonenumber), _darkestsecret(darkestsecret), _initialized(init) {}

Contact::~Contact() {}

std::string Contact::retrive_information(int index)
{
	switch (index)
	{
	case 0:
		return this->_firstname;
	case 1:
		return this->_lastname;
	case 2:
		return this->_nickname;
	case 3:
		return this->_phonenumber;
	case 4:
		return this->_darkestsecret;
	}
	return NULL;
}

bool Contact::exist(void)
{
	return this->_initialized;
}
