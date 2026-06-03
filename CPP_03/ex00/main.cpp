/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/03 14:53:27 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap A("vanda");
	ClapTrap B("other");

	ClapTrap C(A);  // Just to call Copy Constructor and Assignment Operator

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << std::endl << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack damage: " << B.getDamage() << std::endl << std::endl;

    A.attack("other");
    B.takeDamage(0);

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << std::endl << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack damage: " << B.getDamage() << std::endl << std::endl;

    A.beRepaired(1);

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack damage: " << A.getDamage() << std::endl << std::endl;

    B.attack("vanda");
    A.takeDamage(0);

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << std::endl << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack damage: " << B.getDamage() << std::endl << std::endl;

    B.beRepaired(1);

	std::cout << std::endl << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack damage: " << B.getDamage() << std::endl << std::endl;

	return 0;

}
