/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:35:23 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/22 14:54:47 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "'I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!'" << std::endl;
}
void Harl::info()
{
	std::cout << "'I cannot believe adding extra bacon costs more money. You didn't put \
enough bacon in my burger! If you did, I wouldnt be asking for more!'" << std::endl;
}
void Harl::warning()
{
	std::cout << "'I think I deserve to have some extra bacon for free. I've been coming for \
years, whereas you started working here just last month.'" << std::endl;
}

void Harl::error()
{
	std::cout << "'This is unacceptable! I want to speak to the manager now.'" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*actions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    int i = 0;
    while (i < 4)
	{
        if (levels[i] == level)
		{
            (this->*actions[i])();
            return;
        }
		i++;
    }
}
