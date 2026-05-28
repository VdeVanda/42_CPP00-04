/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:03:09 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/28 22:31:34 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <cmath> // to use roundf function for rounding the float value to the nearest integer when converting to fixed-point representation
#include <ostream> // to use std::ostream for the << operator overload

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int value); // New constructor for int
		Fixed(const float value); // New constructor for float
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const; // New member function to convert fixed-point value to float
		int 	toInt(void) const; // New member function to convert fixed-point value to int

	private:
		int					_fixedPoint;
		static const int	_fractBit = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &value); // without this, we won't be able to use std::cout << fixedValue; to print the fixed-point value
#endif
