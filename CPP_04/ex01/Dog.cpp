/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:14:02 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/08 23:25:42 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), brain(new Brain())
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
      _type = other._type;
      delete brain;
      brain = new Brain(*other.brain);
    }
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog: 'Ouff Ouff'" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}

