/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:33:38 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/21 23:09:12 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/**
 * @brief The constructor of the HumanA class takes a string and a reference to a Weapon object as parameters.
 * It initializes the _weapon member variable with the reference to the Weapon object and the _name member variable with the string.
 */
HumanA::HumanA(std::string str, Weapon &weapon): _weapon(weapon), _name(str)
{

}

/**
 * @brief The destructor of the HumanA class does not do anything.
 */
HumanA::~HumanA()
{
}

/**
 * @brief The attack function prints the name of the HumanA object and the type of the weapon it is using.
 * It uses the getType function of the Weapon class to get the type of the weapon.
 */
void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
