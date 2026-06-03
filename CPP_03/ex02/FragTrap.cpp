/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:35:46 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/03 19:39:34 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _name << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap " << _name << " Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap " << _name << " Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{

    if (_energyPoints > 0 && _hitPoints > 0)
	{
        _energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << _name << " don't have enough energy or hit points to attack!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << ": 'Hey! High five, guys!'" << std::endl;
}
