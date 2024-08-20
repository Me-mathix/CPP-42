/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:53:56 by mda-cunh          #+#    #+#             */
/*   Updated: 2024/08/20 14:53:57 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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