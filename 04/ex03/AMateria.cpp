/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:33:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 12:43:28 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	this->_isEquiped = false;
	std::cout << BYEL "AMateria\t" RESET "constructor:\t" << (long)this << RESET
	          << std::endl;
}

AMateria::AMateria(AMateria const &ori)
{
	if (this != &ori)
		*this = ori;
	std::cout << BYEL "AMateria\t" RESET "\tcopy const.:\t" << (long)this
	          << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << BYEL "AMateria\t" HRED "destructor:\t" RESET << (long)this
	          << RESET << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << this->_type << "\tused on\t" << target.getName() << std::endl;
}

AMateria &AMateria::operator=(AMateria const &ori)
{
	if (this != &ori)
	{
		this->_type      = ori.getType();
		this->_isEquiped = ori._isEquiped;
	}
	return *this;
}

bool AMateria::isEquiped() const
{
	return this->_isEquiped;
}

void AMateria::setEquiped(bool equiped)
{
	this->_isEquiped = equiped;
}