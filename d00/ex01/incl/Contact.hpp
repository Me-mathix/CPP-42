#ifndef CONTACT_HPP
#define  CONTACT_HPP

#include <iostream>


class Contact
{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
		bool		_initialized;
	public:
		Contact();
		Contact(std::string firstname,
		std::string 		lastname,
		std::string 		nickname,
		std::string 		phonenumber,
		std::string 		darkestsecret,
		bool 				init);
		~Contact();
		std::string 		retrive_information(int index);
		bool				exist(void);
};

#endif