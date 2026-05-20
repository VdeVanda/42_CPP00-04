/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:34:31 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 20:11:38 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Demonstration: create, announce and destroy zombies
	std::cout << "=== Zombie Demonstration ===" << std::endl;

	// Heap Zombie
	std::cout << std::endl << "--- newZombie (Heap Zombie) ---" << std::endl;
	Zombie* heapDemo = newZombie("newZombie");
	heapDemo->announce();
	delete heapDemo;

    // Stack Zombie
	std::cout << std::endl<< "--- randomChump (Stack Zombie) ---" << std::endl;
	randomChump("randomChump");

	std::cout << std::endl << "=== End of Demonstration ===" << std::endl;
	std::cout << std::endl << "=== Creating Custom Zombies ===" << std::endl << std::endl;

	Zombie*  heap;
    std::string heapZombie, stackZombie;

    std::cout << "Enter name for heap zombie: ";
    std::getline(std::cin, heapZombie);
    heap = newZombie(heapZombie);
    heap->announce();
    delete heap;

    std::cout << std::endl << "Enter name for stack zombie: ";
    std::getline(std::cin, stackZombie);
    randomChump(stackZombie);
}
