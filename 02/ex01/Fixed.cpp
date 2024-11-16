/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:48:21 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/16 03:00:18 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed_point(0)
{
	std::cout << HBLU << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed(int fixed_point) : fixed_point(fixed_point)
{
	std::cout << HBLU << "Int Constructor Called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << HMAG << "Copy Constructor Called" << RESET << std::endl;
	fixed_point = origin.fixed_point;
}

Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << MAG << "Copy Assigment Constructor Called" << RESET << std::endl;
	this->fixed_point = origin.fixed_point;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

int Fixed::getRawBits()
{
	std::cout << HGRN << "getRawBits member function called" << RESET << std::endl;
	return fixed_point;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << HGRN << "setRawBits member function called" << RESET << std::endl;
	fixed_point = raw;
}