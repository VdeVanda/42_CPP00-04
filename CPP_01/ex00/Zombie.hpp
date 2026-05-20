/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:10:12 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 19:10:45 by vabatist         ###   ########.fr       */
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

	public:
        Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
        std::string getZombieName( void ) const;
};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

#endif
