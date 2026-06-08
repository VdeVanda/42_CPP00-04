/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 08:47:11 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/08 23:26:00 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), brain(new Brain())
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
       _type = other._type;
       delete brain;
       brain = new Brain(*other.brain);
    }
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat: 'Meow Meow'" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}
