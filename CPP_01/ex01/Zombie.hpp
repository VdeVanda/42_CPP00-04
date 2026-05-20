/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:10:12 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 23:00:18 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
		std::string _name;
		int _index;

	public:
        Zombie( void );
        Zombie( std::string name );
		~Zombie( void );
		void announce( void );
        void setZombieName( std::string name );
        void setIndex( int index );
};

	Zombie* zombieHorde( int N, std::string name );

#endif
