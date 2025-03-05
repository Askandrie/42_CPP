/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:33:55 by aska              #+#    #+#             */
/*   Updated: 2025/03/05 01:50:31 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

AMateria::AMateria() {} ;

AMateria::AMateria(std::string const & type) : _type(type) {} ;

AMateria::~AMateria() {} ;

AMateria::AMateria(AMateria const & ori) { *this = ori; } ;

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target) {};