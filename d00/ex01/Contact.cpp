/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:53:41 by mda-cunh          #+#    #+#             */
/*   Updated: 2024/08/20 15:04:14 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void Contact::rewrite_information(int index, std::string change)
{
	switch (index)
	{
	case 0:
		this->_firstname = change;
		return ;
	case 1:
		this->_lastname = change;
		return ;
	case 2:
		this->_nickname = change;
		return ;
	case 3:
		this->_phonenumber = change;
		return ;
	case 4:
		this->_darkestsecret = change;
		return ;
	}
}


bool Contact::exist(void)
{
	return this->_initialized;
}
