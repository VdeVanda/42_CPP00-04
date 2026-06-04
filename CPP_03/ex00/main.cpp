/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/04 09:12:46 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap A("A");
	ClapTrap B("B");

	ClapTrap C(A);  // Just to call Copy Constructor and Assignment Operator

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack Damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack Damage: " << B.getDamage() << std::endl << std::endl;

    A.attack("B");
    B.takeDamage(0);

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack Damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack Damage: " << B.getDamage() << std::endl << std::endl;

    A.beRepaired(1);

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack Damage: " << A.getDamage() << std::endl << std::endl;

    B.attack("A");
    A.takeDamage(0);

	std::cout << std::endl << "ClapTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack Damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack Damage: " << B.getDamage() << std::endl << std::endl;

    B.beRepaired(1);

	std::cout << std::endl << "ClapTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack Damage: " << B.getDamage() << std::endl << std::endl;

	return 0;

}
