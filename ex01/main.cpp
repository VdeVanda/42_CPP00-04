/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:45:42 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 13:22:09 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	int			index;
	std::string	input;
	PhoneBook 	Ph;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		input.clear();
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			Ph.AddContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (Ph.GetNumberOfContacts() == 0)
				std::cout << "No contacts found." << std::endl;
			else
			{
				Ph.DisplayContacts();
				std::cout << "Press 0 to continue or select a contact: ";
				while (1)
				{
					input.clear();
					std::cin >> input;
					index = atoi(input.c_str());
					if (index == 0)
						break ;
					if (index >= 1 && index <= 8 && index <= Ph.GetNumberOfContacts())
					{
						Ph.DisplayContact(index - 1);
						break;
					}
					else
						std::cout << "Please select a contact, from 1 to " << Ph.GetNumberOfContacts() << ", or 0 to leave: ";
				}
			}
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}

