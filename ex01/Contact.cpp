/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:42:56 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 14:17:23 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void Contact::ClearContact(void)
{
	this->_firstName.clear();
	this->_lastName.clear();
	this->_nickname.clear();
	this->_phoneNumber.clear();
	this->_darkestSecret.clear();
}

void Contact::CreateContact(void)
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
	while (this->_darkestSecret.empty())
	{
		std::cout << "darkest secret: ";
		std::cin >> this->_darkestSecret;
	}
}

std::string Contact::GetFirstName(void)
{
	return (this->_firstName);
}

std::string Contact::GetLastName(void)
{
	return (this->_lastName);
}

std::string Contact::GetNickname(void)
{
	return (this->_nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->_darkestSecret);
}
