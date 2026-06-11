/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 23:09:31 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/11 12:54:23 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain& Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
       int i = 0;
       while (i < 100)
       {
            ideas[i] = other.ideas[i];
			i++;
       }
    }
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
    {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
    {
        return ideas[index];
    }
    return "";
}
