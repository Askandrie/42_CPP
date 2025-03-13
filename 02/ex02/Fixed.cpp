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

Fixed::Fixed(const int i)
{
	std::cout << HGRE << "Int Constructor Called" << RESET << std::endl;
	_fixed_point = i << _fractional_bit;
}

Fixed::Fixed(const float f)
{
	std::cout << HGRE << "Float Constructor Called" << RESET << std::endl;
	_fixed_point = (int)roundf(f * (1 << _fractional_bit));
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << HMAG << "Copy Constructor Called" << RESET << std::endl;
	_fixed_point = origin._fixed_point;
}

Fixed &Fixed::operator=(const Fixed &origin)
{
	std::cout << MAG << "Copy Assigment Constructor Called" << RESET << std::endl;
	if (this != &origin)
	this->_fixed_point = origin._fixed_point;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

int Fixed::getRawBits()
{
	std::cout << HBLU << "getRawBits member function called" << RESET << std::endl;
	return _fixed_point;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << HBLU << "setRawBits member function called" << RESET << std::endl;
	_fixed_point = raw;
}

int Fixed::toInt() const
{
	return _fixed_point >> _fractional_bit;
}

float Fixed::toFloat() const
{
	return (float)_fixed_point / (1 << _fractional_bit);
}

bool	Fixed::operator>(const Fixed &f) const
{
	return this->_fixed_point > f._fixed_point;
}

bool	Fixed::operator<(const Fixed &f) const
{
	return this->_fixed_point < f._fixed_point;
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return this->_fixed_point >= f._fixed_point;
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return this->_fixed_point <= f._fixed_point;
}

bool	Fixed::operator==(const Fixed &f) const
{
	return this->_fixed_point == f._fixed_point;
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return this->_fixed_point != f._fixed_point;
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
	this->_fixed_point++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixed_point++;
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->_fixed_point--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixed_point--;
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