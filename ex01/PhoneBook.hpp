/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:31:33 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 19:21:51 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <string>

class PhoneBook
{
	public:
		PhoneBook(void);
		void addContact(void);
		void displayContacts(void);
		void displayContact(int index);
		int	getNumberOfContacts(void);
		~PhoneBook(void);

	private:
		int		_count;
		Contact _contacts[8];
		void	_printField(std::string field, bool verbose);
		std::string	_printFieldFormatted(std::string field);
};

#endif
