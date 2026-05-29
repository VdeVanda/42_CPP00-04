/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/29 11:57:04 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl; // a = 0 - constructor set a to 0
	//std::cout << a / 0 << std::endl;
	//std::cout << a.getRawBits() << std::endl;  // Imprime 0 (o valor de _fixedPoint)
	std::cout << ++a << std::endl; // a = 0.00390625 - ++a increments _fixedPoint from 0 to 1, so it prints 1/256 = 0.00390625
	//std::cout << a.getRawBits() << std::endl;  // Imprime 1 (o valor de _fixedPoint)
	std::cout << a << std::endl; // a = 0.00390625 - _fixedPoint is 1, so it still prints 1/256 = 0.00390625
	//std::cout << a.getRawBits() << std::endl;  // Imprime 1 (o valor de _fixedPoint)
	std::cout << a++ << std::endl; // a = 0.00390625 - a++ returns the value BEFORE incrementing (1/256), then increments _fixedPoint to 2
	//std::cout << a.getRawBits() << std::endl;  // Imprime 2 (o valor de _fixedPoint)
	std::cout << a << std::endl; // a = 0.0078125 - _fixedPoint is 2, so it prints 2/256 = 0.0078125
	//std::cout << a.getRawBits() << std::endl;  // Imprime 2 (o valor de _fixedPoint)
	std::cout << b << std::endl; // b = 10.1016 - b is the result of multiplying 5.05 by 2, which gives 10.1 in float representation, but due to the fixed-point representation and rounding, it prints as 10.1016
	//std::cout << b.getRawBits() << std::endl;  // Imprime 2586 (o valor de _fixedPoint)

	std::cout << Fixed::max( a, b ) << std::endl; // max(a, b) = 10.1016 - compared to a (0.0078125)

return 0;
}
