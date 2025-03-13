/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:48:21 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << HGRE "Default Constructor Called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &origin) : _fixed_point(origin._fixed_point)
{
	std::cout << HMAG "Copy Constructor Called" RESET << std::endl;
}

Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << MAG "Copy Assigment Constructor Called" RESET << std::endl;
	this->_fixed_point = origin._fixed_point;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor Called" RESET << std::endl;
}

int Fixed::getRawBits()
{
	std::cout << HBLU "getRawBits member function called" RESET << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << HBLU "setRawBits member function called" RESET << std::endl;
	this->_fixed_point = raw;
}