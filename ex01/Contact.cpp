#include "Contact.hpp"


Contact::Contact() {}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname,
			std::string phonenumber, std::string darkestsecret)
			: _firstname(firstname), _lastname(lastname), _nickname(nickname),
			_phonenumber(phonenumber), _darkestsecret(darkestsecret) {}

Contact::~Contact() {}

std::string 