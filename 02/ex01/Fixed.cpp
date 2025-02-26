/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:48:21 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/02/26 12:24:45 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
	std::cout << HBLU << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed(int i)
{
	std::cout << HBLU << "Int Constructor Called" << RESET << std::endl;
	fixed_point = i << fractional_bit;
}

Fixed::Fixed(float f)
{
	std::cout << HBLU << "Float Constructor Called" << RESET << std::endl;
	fixed_point = (int)roundf(f * (1 << fractional_bit));
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << HMAG << "Copy Constructor Called" << RESET << std::endl;
	fixed_point = origin.fixed_point;
}

int Fixed::toInt() const
{
	return fixed_point >> fractional_bit;
}

float Fixed::toFloat() const
{
	return (float)fixed_point / (1 << fractional_bit);
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


Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << MAG << "Copy Assigment Constructor Called" << RESET << std::endl;
	if (this != &origin)
		this->fixed_point = origin.fixed_point;
	return *this;
}

std::ostream&	operator<<(std::ostream& o, Fixed const &f) {
	o << f.toFloat();
	return o;
}