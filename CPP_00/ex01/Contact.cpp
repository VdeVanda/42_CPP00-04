/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:42:56 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 18:49:04 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

/**
 * Resets all the contact's information to an empty state.
 * It clears the strings that hold the:
 * - first name,
 * - last name,
 * - nickname,
 * - phone number, and
 * - darkest secret,
 * effectively erasing any existing data for that contact.
 */
void Contact::clearContact(void)
{
	this->_firstName.clear();
	this->_lastName.clear();
	this->_nickname.clear();
	this->_phoneNumber.clear();
	this->_darkestSecret.clear();
}

/**
 * Prompts the user to enter the contact's information,
 * ensuring that none of the fields are left empty.
 * It uses a loop to repeatedly ask for input until valid data is provided for each field.
 */
void Contact::createContact(void)
{
	while (this->_firstName.empty())
	{
		std::cout << "first name: ";
		std::cin >> this->_firstName;
	}
	while (this->_lastName.empty())
	{
		std::cout << "last name: ";
		std::cin >> this->_lastName;
	}
	while (this->_nickname.empty())
	{
		std::cout << "nickname: ";
		std::cin >> this->_nickname;
	}
	while (this->_phoneNumber.empty())
	{
		std::cout << "phone number: ";
		std::cin >> this->_phoneNumber;
	}
	std::cin.ignore(); 
	while (this->_darkestSecret.empty())
	{
		std::cout << "darkest secret: ";
		std::getline(std::cin, this->_darkestSecret);
	}
}

/**
 * Getter methods for the Contact class.
 * Allows access to the private member variables that store the contact's information.
 * Each function returns the corresponding field as a string.
 */
std::string Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}
