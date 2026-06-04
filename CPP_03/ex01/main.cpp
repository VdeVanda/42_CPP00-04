/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/04 09:15:20 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "========== ClapTrap TEST ==========" << std::endl;
	std::cout << std::endl;
	ClapTrap a("Original");
	std::cout << std::endl << "ClapTrap: " << a.getName() << std::endl << "Hit Points: " << a.getHitPoints()
	<< std::endl << "Energy Points: " << a.getEnergyPoints() << std::endl << "Attack Damage: " << a.getDamage() << std::endl << std::endl;

	a.attack("other ClapTrap");
	std::cout << std::endl;

	std::cout << "========== ScavTrap TEST (Inherits from ClapTrap) ==========" << std::endl;
	std::cout << std::endl;
	ScavTrap A("A");
	ScavTrap B("B");

	std::cout << std::endl << "ScavTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack Damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << "ScavTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack Damage: " << B.getDamage() << std::endl << std::endl;

	A.attack("ScavTrap B");
	std::cout << std::endl;

	std::cout << "ScavTrap Special Ability:" << std::endl;
	A.guardGate();
	B.guardGate();
	std::cout << std::endl;

	std::cout << "========== DESTRUCTION ORDER ==========" << std::endl;
	std::cout << std::endl;
	return 0;
}
