/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:30:39 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/03 15:01:31 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name): _name(name), 	_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignment Operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{

    if (_energyPoints > 0 && _hitPoints > 0)
	{
        _energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " don't have enough energy or hit points to attack!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
	{
        std::cout << "ClapTrap " << _name << " is dead 💀" << std::endl;
    }
    else
	{
        std::cout << "ClapTrap " << _name << " lost " << amount << " hit points" << std::endl;
        if (_hitPoints <= amount)
            _hitPoints = 0;
        else
            _hitPoints -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
	{
        std::cout << "ClapTrap " << _name << " is dead 💀" << std::endl;
    }
    else if (_energyPoints > 0)
	{
        _energyPoints--;
		std::cout << "ClapTrap " << _name << " got " << amount << " repair points" << std::endl;
		_hitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << _name << " don't have enough energy to repair!" << std::endl;
}

const std::string 	&ClapTrap::getName()
{
	return (_name);
}

int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int	ClapTrap::getDamage() const
{
	return (_attackDamage);
}
