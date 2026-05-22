/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:44:06 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/22 15:01:39 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

int main(void)
{
	Harl harl;
	std::string level;

	std::cout << "=== Harl Complain System ===" << std::endl;
	std::cout << std::endl << "--- Available Complaint Levels ---" << std::endl;
	std::cout << std::endl << "DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl << "WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "ERROR:" << std::endl;
	harl.complain("ERROR");

	std::cout << std::endl << "=== Custom Complaints ===" << std::endl;
	std::cout << std::endl;

	while (true)
	{
		std::cout << "Choose a complaint level: DEBUG, INFO, WARNING, ERROR (or type 'EXIT' to quit): ";
		if (std::cin.eof()) // EOF check to handle Ctrl+D
			exit(1);
		std::getline(std::cin, level);

		if (level == "EXIT" || level == "exit")
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}

		if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
		{
			std::cout << std::endl;
			harl.complain(level);
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Invalid level. Please choose from: DEBUG, INFO, WARNING, ERROR" << std::endl;
			std::cout << std::endl;
		}
	}

	return (0);
}
