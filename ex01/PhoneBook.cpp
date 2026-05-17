/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:43:48 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 14:18:55 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_count = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::AddContact(void)
{
	static int	position;

	if (position >= 8)
		position = 0;
	this->_contacts[position].ClearContact();
	this->_contacts[position].CreateContact();
	position++;
	if (this->_count < 8)
		this->_count++;
	std::cout << "Done!" << std::endl;
}

int PhoneBook::GetNumberOfContacts(void)
{
	return this->_count;
}

void PhoneBook::DisplayContacts(void)
{
	int			i;
	std::string	field;

	std::cout << std::setfill('-') << std::setw(45) << "-" << std::setfill(' ') << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "index"
		  << "|" << std::setw(10) << std::right << "first name"
		  << "|" << std::setw(10) << std::right << "last name"
		  << "|" << std::setw(10) << std::right << "nickname"
		  << "|" << std::endl;
	i = 0;
	while (i < this->_count)
	{
		std::cout << "|" << std::setw(10) << std::right << (i + 1)
			  << "|" << std::setw(10) << std::right << this->_PrintFieldFormatted(this->_contacts[i].GetFirstName(), false)
			  << "|" << std::setw(10) << std::right << this->_PrintFieldFormatted(this->_contacts[i].GetLastName(), false)
			  << "|" << std::setw(10) << std::right << this->_PrintFieldFormatted(this->_contacts[i].GetNickname(), false)
			  << "|" << std::endl;
		i++;
	}
	std::cout << std::setfill('-') << std::setw(45) << "-" << std::setfill(' ') << std::endl;
}

void PhoneBook::DisplayContact(int i)
{
	std::cout << "first name: ";
	this->_PrintField(this->_contacts[i].GetFirstName(), true);
	std::cout << std::endl;
	std::cout << "last name: ";
	this->_PrintField(this->_contacts[i].GetLastName(), true);
	std::cout << std::endl;
	std::cout << "nickname: ";
	this->_PrintField(this->_contacts[i].GetNickname(), true);
	std::cout << std::endl;
	std::cout << "phone number: ";
	this->_PrintField(this->_contacts[i].GetPhoneNumber(), true);
	std::cout << std::endl;
	std::cout << "darkest secret: ";
	this->_PrintField(this->_contacts[i].GetDarkestSecret(), true);
	std::cout << std::endl;
}

void PhoneBook::_PrintField(std::string field, bool verbose)
{
	if (verbose == true)
	{
		std::cout << field;
		return ;
	}
	std::cout << this->_PrintFieldFormatted(field, false);
}

std::string PhoneBook::_PrintFieldFormatted(std::string field, bool verbose)
{	(void)verbose;	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	return field;
}
