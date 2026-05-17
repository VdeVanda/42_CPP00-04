/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:31:33 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 12:31:50 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		void AddContact(void);
		void DisplayContacts(void);
		void DisplayContact(int index);
		int	GetNumberOfContacts(void);
		~PhoneBook(void);

	private:
		int		_count;
		Contact _contacts[8];
		void	_PrintField(std::string field, bool verbose);
		std::string	_PrintFieldFormatted(std::string field, bool verbose);
};

#endif
