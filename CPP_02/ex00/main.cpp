/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:02:43 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/26 21:38:13 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{

	// 1. Default constructor called
	Fixed a;

	// 2. Copy constructor called
	// 3. Copy assignment operator called (inside copy constructor)
	// 4. getRawBits member function called (inside copy constructor)
	Fixed b(a);

	// 5. Default constructor called
	Fixed c;

	// 6. Copy assignment operator called
	c = b;

	// 7. getRawBits member function called
	// 8. getRawBits member function called (from << operator or something)
	// 9. 0 (output from a.getRawBits())
	std::cout << a.getRawBits() << std::endl;

	// 10. getRawBits member function called
	// 11. 0 (output from b.getRawBits())
	std::cout << b.getRawBits() << std::endl;

	// 12. getRawBits member function called
	// 13. 0 (output from c.getRawBits())
	std::cout << c.getRawBits() << std::endl;

	// 14. Destructor called (for a)
	// 15. Destructor called (for b)
	// 16. Destructor called (for c)

	return 0;
}
