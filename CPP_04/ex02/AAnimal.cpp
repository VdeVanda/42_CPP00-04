/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:32:30 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/10 23:48:15 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Default")
{
    std::cout << "AAnimal with the type " << _type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    _type = type;
    std::cout << "AAnimal with the type " << type << " constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    _type = copy._type;
    std::cout << "AAnimal with the type " << _type << " copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    _type = other._type;
    std::cout << "AAnimal with the type " << _type << " assignment operator called" << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal with the type " << _type << " destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "No sound" << std::endl;
}

std::string AAnimal::getType() const
{
    return _type;
}
