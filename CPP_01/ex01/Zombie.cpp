/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:18:07 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 22:52:01 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	_name = "";
	_index = 0;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " has been created" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _index << " " << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	_name = name;
	std::cout << _index << " " << _name << " has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _index << " " << _name << " has been destroyed" << std::endl;
}

void	Zombie::setIndex(int index)
{
	_index = index;
}

