/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:03:09 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/29 08:35:09 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <cmath> // to use roundf function for rounding the float value to the nearest integer when converting to fixed-point representation
#include <ostream> // to use std::ostream for the << operator overload

class	Fixed
{
	public:
	// constructors/destructors
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int value); // New constructor for int
		Fixed(const float value); // New constructor for float
		~Fixed();

	// comparison operators
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

	// arithmetic operators
		Fixed 	&operator=(const Fixed &other);
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator/(const Fixed &other);

	// increment/decrement operators
		Fixed	&operator++(void); // prefix increment
		Fixed	operator++(int); // postfix increment
		Fixed	&operator--(void); // prefix decrement
		Fixed	operator--(int); // postfix decrement

	// min/max functions
		static Fixed	&min(Fixed &a, Fixed &b); // returns a reference to the smaller of the two Fixed object
		static const Fixed	&min(const Fixed &a, const Fixed &b); // returns a reference to the smallest const fixed object
		static Fixed	&max(Fixed &a, Fixed &b); // returns a reference to the greatest Fixed object
		static const Fixed	&max(const Fixed &a, const Fixed &b); // returns a reference to the greatest const fixed object

	// getters/setters
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const; // New member function to convert fixed-point value to float
		int 	toInt(void) const; // New member function to convert fixed-point value to int

	private:
		int					_fixedPoint;
		static const int	_fractBit = 8; // Number of bits used for the fractional part of the fixed-point representation
};

std::ostream	&operator<<(std::ostream &out, const Fixed &value); // without this, we won't be able to use std::cout << fixedValue; to print the fixed-point value
#endif
