/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:33:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 16:35:42 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	this->_isEquiped = false;
	this->_ID = (long)this;
	std::cout << HBLA "AMateria " RESET "constructor: " BWHI << this->_ID << RESET << std::endl;
}

AMateria::AMateria(AMateria const & ori)
{
	if (this != & ori)
		*this = ori;
	std::cout << HBLA "AMateria " RESET "copy constructor: " BWHI << this->_ID << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << HBLA "AMateria " HRED "destructor: " BWHI << this->_ID << RESET << std::endl;
}


std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->_type <<" used on " << target.getName() << std::endl;
}

AMateria & AMateria::operator=(AMateria const & ori)
{
	if (this != &ori)
	{
		this->_type = ori.getType();
		this->_ID = ori._ID;
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