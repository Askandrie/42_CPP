/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:33:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 22:52:24 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {} ;

AMateria::~AMateria() {} ;

AMateria::AMateria(AMateria const & ori)
{
	if (this != & ori)
		*this = ori;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->_type <<" used on " << target.getName() << std::endl;
}