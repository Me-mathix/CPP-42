/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:53:53 by mda-cunh          #+#    #+#             */
/*   Updated: 2024/08/20 15:02:16 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		void				rewrite_information(int index, std::string change);
		bool				exist(void);
};

#endif