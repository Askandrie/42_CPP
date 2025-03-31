/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:19:12 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 12:42:11 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << BYEL << "Cure\t" << RESET << "\tconstructor:\t" << (long)this
	          << std::endl;
}

Cure::Cure(Cure const &ori) : AMateria(ori.getType())
{
	std::cout << BYEL << "Cure\t" << RESET << "\tcopy const.:\t" << (long)this
	          << std::endl;
}

Cure::~Cure()
{
	std::cout << BYEL << "Cure\t" << RED << "\tdestructor:\t" << RESET
	          << (long)this << std::endl;
}

Cure &Cure::operator=(Cure const &ori)
{
	if (this != &ori)
		this->_type = ori._type;
	return *this;
}

AMateria *Cure::clone() const
{
	std::cout << BR1G5B2 << "Cure" << RESET << " has cloned" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << BR1G5B2 << "* heals " << target.getName() << "'s wounds *"
	          << RESET << std::endl;
}