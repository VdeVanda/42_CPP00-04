/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:28:24 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/21 21:29:53 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->setType(str);
	std::cout << "Weapon has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon has been destroyed" << std::endl;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType()
{
	return _type;
}
