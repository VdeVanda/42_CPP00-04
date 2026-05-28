/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/28 23:42:43 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed( 1234.4321f );

	// Fixed-point conversion: multiply by 256 (round), divide by 256, print with default precision
	std::cout << "a is " << a << std::endl; // a is 1234.43
	std::cout << "b is " << b << std::endl; // b is 10
	std::cout << "c is " << c << std::endl; // c is 42.42
	std::cout << "d is " << d << std::endl; // d is 10

	//std::cout << "intern a is " << a.getRawBits() << std::endl;
	//std::cout << "intern b is " << b.getRawBits() << std::endl;
	//std::cout << "intern c is " << c.getRawBits() << std::endl;
	//std::cout << "intern d is " << d.getRawBits() << std::endl;

	// toInt() conversion: divide by 256 (round), print as integer
	std::cout << "a is " << a.toInt() << " as integer" << std::endl; // a is 1234 as integer
	std::cout << "b is " << b.toInt() << " as integer" << std::endl; // b is 10 as integer
	std::cout << "c is " << c.toInt() << " as integer" << std::endl; // c is 42 as integer
	std::cout << "d is " << d.toInt() << " as integer" << std::endl; // d is 10 as integer
	return 0;
}
