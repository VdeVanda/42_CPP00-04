/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:34:31 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 22:57:01 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <limits>
#include <cstdlib>

int	main(void)
{
	// Demonstration: create, announce and destroy zombies
	std::cout << "=== Zombie Horde Demonstration ===" << std::endl;

	// Demo Horde
	std::cout << std::endl << "--- zombieHorde Demo (Heap Horde) ---" << std::endl;
	Zombie* demoHorde = zombieHorde(3, "DemoZombie");
	int i = 0;
	while (i < 3)
	{
		demoHorde[i].announce();
		i++;
	}
	delete[] demoHorde;

	std::cout << std::endl << "=== End of Demonstration ===" << std::endl;
	std::cout << std::endl << "=== Creating Custom Zombie Horde ===" << std::endl << std::endl;

	int hordeSize;
	std::string name;

	std::cout << "How many Zombies? ";
	if (std::cin.eof())
		exit(1);
	else
		std::cin >> hordeSize;
	if (hordeSize < 1)
	{
		std::cerr << "None less than 1 Zombie makes a horde" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "How is your Zombie Horde called? ";
	std::getline(std::cin, name);

	std::cout << std::endl << "--- Creating horde of " << hordeSize << " zombies ---" << std::endl;
	Zombie* horde = zombieHorde(hordeSize, name);

	std::cout << std::endl << "--- All zombies announce themselves ---" << std::endl;
	int j = 0;
	while (j < hordeSize)
	{
		horde[j].announce();
		j++;
	}

	std::cout << std::endl << "--- Destroying horde ---" << std::endl;
	delete[] horde;

	std::cout << std::endl << "=== End of Demonstration ===" << std::endl;
	return (0);
}
