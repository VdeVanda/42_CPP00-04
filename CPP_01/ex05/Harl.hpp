/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:33:29 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/22 14:34:53 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
    void debug( void );
 	void info( void );
 	void warning( void );
 	void error( void );

	public:
		Harl();
		~Harl();

		void complain( std::string level );
};

#endif
