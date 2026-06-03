/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/03 19:46:24 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	std::cout << "========== ClapTrap TEST ==========" << std::endl;
	ClapTrap a("Original");
	std::cout << std::endl << "ClapTrap: " << a.getName() << std::endl << "Hit Points: " << a.getHitPoints()
	<< std::endl << "Energy Points: " << a.getEnergyPoints() << std::endl << "Attack damage: " << a.getDamage() << std::endl << std::endl;

	a.attack("other ClapTrap");
	std::cout << std::endl;

	std::cout << "========== ScavTrap TEST (Inherits from ClapTrap) ==========" << std::endl;
	ScavTrap A("A");
	ScavTrap B("B");

	std::cout << std::endl << "ScavTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << "ScavTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack damage: " << B.getDamage() << std::endl << std::endl;

	A.attack("ScavTrap B");
	B.takeDamage(20);
	std::cout << std::endl;

	std::cout << "ScavTrap: " << A.getName() << std::endl << "Hit Points: " << A.getHitPoints()
	<< std::endl << "Energy Points: " << A.getEnergyPoints() << std::endl << "Attack damage: " << A.getDamage() << std::endl << std::endl;

	std::cout << "ScavTrap: " << B.getName() << std::endl << "Hit Points: " << B.getHitPoints()
	<< std::endl << "Energy Points: " << B.getEnergyPoints() << std::endl << "Attack damage: " << B.getDamage() << std::endl << std::endl;

	std::cout << "ScavTrap special ability:" << std::endl;
	A.guardGate();
	B.guardGate();
	std::cout << std::endl;

	std::cout << "========== FragTrap TEST (Inherits from ClapTrap) ==========" << std::endl;
	FragTrap C("C");
	FragTrap D("D");

	std::cout << std::endl << "FragTrap: " << C.getName() << std::endl << "Hit Points: " << C.getHitPoints()
	<< std::endl << "Energy Points: " << C.getEnergyPoints() << std::endl << "Attack damage: " << C.getDamage() << std::endl << std::endl;

	std::cout << "FragTrap: " << D.getName() << std::endl << "Hit Points: " << D.getHitPoints()
	<< std::endl << "Energy Points: " << D.getEnergyPoints() << std::endl << "Attack damage: " << D.getDamage() << std::endl << std::endl;

	C.attack("FragTrap D");
	D.takeDamage(30);
	std::cout << std::endl;

	std::cout << "FragTrap: " << C.getName() << std::endl << "Hit Points: " << C.getHitPoints()
	<< std::endl << "Energy Points: " << C.getEnergyPoints() << std::endl << "Attack damage: " << C.getDamage() << std::endl << std::endl;

	std::cout << "FragTrap: " << D.getName() << std::endl << "Hit Points: " << D.getHitPoints()
	<< std::endl << "Energy Points: " << D.getEnergyPoints() << std::endl << "Attack damage: " << D.getDamage() << std::endl << std::endl;

	std::cout << "FragTrap special ability:" << std::endl;
	C.highFivesGuys();
	D.highFivesGuys();
	std::cout << std::endl;

	std::cout << "========== DESTRUCTION ORDER ==========" << std::endl;

	return 0;
}
