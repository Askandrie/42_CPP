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

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << HGRE << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed(int i)
{
	std::cout << HGRE << "Int Constructor Called" << RESET << std::endl;
	this->_fixed_point = i << this->_fractional_bit;
}

Fixed::Fixed(float f)
{
	std::cout << HGRE << "Float Constructor Called" << RESET << std::endl;
	this->_fixed_point = (int)roundf(f * (1 << this->_fractional_bit));
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << HMAG << "Copy Constructor Called" << RESET << std::endl;
	this->_fixed_point = origin._fixed_point;
}

int Fixed::toInt() const
{
	return this->_fixed_point >> this->_fractional_bit;
}

float Fixed::toFloat() const
{
	return (float)this->_fixed_point / (1 << this->_fractional_bit);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

int Fixed::getRawBits()
{
	std::cout << HBLU << "getRawBits member function called" << RESET << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << HBLU << "setRawBits member function called" << RESET << std::endl;
	this->_fixed_point = raw;
}


Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << MAG << "Copy Assigment Constructor Called" << RESET << std::endl;
	if (this != &origin)
		this->_fixed_point = origin._fixed_point;
	return *this;
}

std::ostream&	operator<<(std::ostream& o, Fixed const &f) {
	o << f.toFloat();
	return o;
}