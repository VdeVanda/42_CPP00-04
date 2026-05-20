/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:43:48 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 10:04:14 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_count = 0;
}

PhoneBook::~PhoneBook(void)
{

}

/**
 * Adds a new contact to the phone book.
 * It uses a static variable `position` to keep track of where the next contact should be added in the array.
 * If the position exceeds the maximum (8), overwrites the oldest contact.
 * The function first clears any existing data for that contact slot,
 * then prompts the user to enter new contact information,
 * and finally increments the count of contacts if it's less than 8.
 */
void PhoneBook::addContact(void)
{
	static int	position;

	if (position >= 8)
		position = 0;
	this->_contacts[position].clearContact();
	this->_contacts[position].createContact();
	position++;
	if (this->_count < 8)
		this->_count++;
	std::cout << "Done!" << std::endl;
}

/**
 * Returns the current number of contacts stored in the phone book, which can be up to 8.
 */
int PhoneBook::getNumberOfContacts(void)
{
	return this->_count;
}

/**
 * Displays a list of all contacts in the phone book in a formatted table.
 * It shows the index, first name, last name, and nickname of each contact.
 */
void PhoneBook::displayContacts(void)
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
			  << "|" << std::setw(10) << std::right << this->_printFieldFormatted(this->_contacts[i].getFirstName())
			  << "|" << std::setw(10) << std::right << this->_printFieldFormatted(this->_contacts[i].getLastName())
			  << "|" << std::setw(10) << std::right << this->_printFieldFormatted(this->_contacts[i].getNickname())
			  << "|" << std::endl;
		i++;
	}
	std::cout << std::setfill('-') << std::setw(45) << "-" << std::setfill(' ') << std::endl;
}

/**
 * Displays the full details of a contact at a given index.
 */
void PhoneBook::displayContact(int i)
{
	std::cout << "first name: ";
	this->_printField(this->_contacts[i].getFirstName(), true);
	std::cout << std::endl;
	std::cout << "last name: ";
	this->_printField(this->_contacts[i].getLastName(), true);
	std::cout << std::endl;
	std::cout << "nickname: ";
	this->_printField(this->_contacts[i].getNickname(), true);
	std::cout << std::endl;
	std::cout << "phone number: ";
	this->_printField(this->_contacts[i].getPhoneNumber(), true);
	std::cout << std::endl;
	std::cout << "darkest secret: ";
	this->_printField(this->_contacts[i].getDarkestSecret(), true);
	std::cout << std::endl;
}

/**
 * Prints a field of a contact. If verbose is true, it prints the field as is.
 * If verbose is false, it formats the field for display in the contact list.
 */
void PhoneBook::_printField(std::string field, bool verbose)
{
	if (verbose == true)
	{
		std::cout << field;
		return ;
	}
	std::cout << this->_printFieldFormatted(field);
}

/**
 * Formats a string field for display in the contact list.
 * If the field is longer than 10 characters,
 * it truncates the string to 9 characters and appends a dot ('.') to indicate truncation.
 * If the field is 10 characters or shorter, it returns the field as is.
 */
std::string PhoneBook::_printFieldFormatted(std::string field)
{	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	else
	return field;
}
