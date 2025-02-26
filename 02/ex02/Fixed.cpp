/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:48:21 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/02/26 22:04:01 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
	std::cout << HBLU << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << HBLU << "Int Constructor Called" << RESET << std::endl;
	fixed_point = i << fractional_bit;
}

Fixed::Fixed(const float f)
{
	std::cout << HBLU << "Float Constructor Called" << RESET << std::endl;
	fixed_point = (int)roundf(f * (1 << fractional_bit));
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << HMAG << "Copy Constructor Called" << RESET << std::endl;
	fixed_point = origin.fixed_point;
}

Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << MAG << "Copy Assigment Constructor Called" << RESET << std::endl;
	if (this != &origin)
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

int Fixed::toInt() const
{
	return fixed_point >> fractional_bit;
}

float Fixed::toFloat() const
{
	return (float)fixed_point / (1 << fractional_bit);
}

bool	Fixed::operator>(const Fixed &f) const
{
	return this->fixed_point > f.fixed_point;
}

bool	Fixed::operator<(const Fixed &f) const
{
	return this->fixed_point < f.fixed_point;
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return this->fixed_point >= f.fixed_point;
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return this->fixed_point <= f.fixed_point;
}

bool	Fixed::operator==(const Fixed &f) const
{
	return this->fixed_point == f.fixed_point;
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return this->fixed_point != f.fixed_point;
}

Fixed	Fixed::operator+(const Fixed &f) const
{
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed	Fixed::operator-(const Fixed &f) const
{
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed	Fixed::operator*(const Fixed &f) const
{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed	Fixed::operator/(const Fixed &f) const
{
	return Fixed(this->toFloat() / f.toFloat());
}

Fixed	&Fixed::operator++()
{
	this->fixed_point++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixed_point++;
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->fixed_point--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixed_point--;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

std::ostream&	operator<<(std::ostream& o, Fixed const &f) {
	o << f.toFloat();
	return o;
}