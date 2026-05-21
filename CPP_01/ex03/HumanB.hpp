/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:32:31 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/21 21:32:52 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
        Weapon *_weapon;
		std::string _name;
	public:
		HumanB(std::string str);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
