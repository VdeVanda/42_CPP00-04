/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 12:45:42 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/17 19:34:10 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

/**
 * The main function serves as the entry point for the phone book application.
 * It provides a simple command-line interface that allows users to:
 * - ADD new contacts,
 * - SEARCH for existing contacts,
 * - EXIT the application.
 */
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
			Ph.addContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (Ph.getNumberOfContacts() == 0)
				std::cout << "No contacts found." << std::endl;
			else
			{
				Ph.displayContacts();
				std::cout << "Press 0 to return or enter the index of the entry to display: ";
				while (1)
				{
					input.clear();
					std::cin >> input;
					index = atoi(input.c_str());
					if (index == 0)
						break ; // Return to the main menu
					if (index >= 1 && index <= 8 && index <= Ph.getNumberOfContacts())
					{
						Ph.displayContact(index - 1); // Display the selected contact (adjusting for 0-based index)
						break;
					}
					else
						std::cout << "Index out of range. Please select a contact, from 1 to " << Ph.getNumberOfContacts() << ", or 0 to return to the menu: ";
				}
			}
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Exiting the program..." << std::endl;
			std::cout << "Done!" << std::endl;
			break ;
		}
	}
	return (0);
}

