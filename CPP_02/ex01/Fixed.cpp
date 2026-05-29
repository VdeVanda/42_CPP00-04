/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:07:52 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/29 08:09:57 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPoint = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const int value) // New constructor for int
{
	std::cout << "Int constructor called" << std::endl;
	// For int, does a shift left (multiplies by 256)
	this->_fixedPoint = value << this->_fractBit; // Shift left to convert int to fixed-point representation
	// this->_fixedPoint = value * 256; the same but less efficient because it calculates 256 every time instead of using a bit shift which is faster
}

Fixed::Fixed(const float value) // New constructor for float
{
	std::cout << "Float constructor called" << std::endl; // multiply the float value by 256 and saves the result in the _fixedPoint member variable
	// For float, multiplies by 256 and rounds
	this->_fixedPoint = roundf(value * (1 << this->_fractBit)); // roundf function is used to round the result to the nearest integer
	// this->_fixedPoint = roundf(value * 256); the same but less efficient because it calculates 256 every time instead of using a bit shift which is faster
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

float	Fixed::toFloat(void) const // New member function to convert fixed-point value to float
{
	// To read back as float, just divides by 256
	return (_fixedPoint / 256.0f); // Divide by 256 (which is 2^8) to convert fixed-point representation back to float
}

int		Fixed::toInt(void) const
{
	// To read back as int, does a shift right (divides by 256)
	return (_fixedPoint >> _fractBit); // Shift right to convert fixed-point representation back to int
}


std::ostream	&operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat(); // Output the fixed-point value as a float when using the << operator
	return out;
}

