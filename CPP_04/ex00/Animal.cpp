/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:32:30 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/04 18:36:39 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Default")
{
    std::cout << "Animal with the type " << _type << " constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Animal with the type " << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    _type = copy._type;
    std::cout << "Animal with the type " << _type << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    _type = other._type;
    std::cout << "Animal with the type " << _type << " assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal " << _type << " destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal with the type " << _type << " doesn't make any particular sound" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}
