/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:26:02 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/08 09:51:10 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Default")
{
    std::cout << "WrongAnimal with the type " << _type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "WrongAnimal with the type " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    _type = copy._type;
    std::cout << "WrongAnimal with the type " << _type << " copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    _type = other._type;
    std::cout << "WrongAnimal with the type " << _type << " assignment operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal with the type " << _type << " destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal: " << _type << " wrong animals doesn't make any particular sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}
