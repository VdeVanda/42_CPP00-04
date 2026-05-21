/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:36:27 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/21 23:10:24 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

/**
 * @brief The constructor of the HumanB class takes a string as a parameter,
 * initializes the _weapon member variable to NULL and the _name member variable with the string.
 */
HumanB::HumanB(std::string str): _weapon(NULL), _name(str)
{

}

/**
 * @brief The destructor of the HumanB class does not do anything.
 */
HumanB::~HumanB()
{
}

/**
 * @brief The attack function prints the name of the HumanB object and the type of the weapon it is using.
 * It uses the getType function of the Weapon class to get the type of the weapon.
 */
void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

/**
 * @brief The setWeapon function takes a reference to a Weapon object as a parameter
 * and sets the _weapon member variable to point to that object.
 */
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
