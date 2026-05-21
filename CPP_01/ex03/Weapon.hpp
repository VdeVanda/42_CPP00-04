/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:26:14 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/21 21:27:09 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    private:
		std::string _type;
	public:
		Weapon(std::string str);
		~Weapon();

	const std::string	&getType();
	void	setType(std::string type);
};

#endif
