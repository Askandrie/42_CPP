/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:19:12 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 03:24:21 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << BYEL << "Cure" << RESET << "\tconstructor" << std::endl;
}

Cure::Cure(Cure const & ori) : AMateria(ori.getType())
{
    std::cout << BYEL << "Cure" << RESET << "\tcopy constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << BYEL << "Cure" << RED << "\tdestructor" << RESET << std::endl;
}

Cure &Cure::operator=(Cure const & ori)
{
	if (this != &ori)
		this->_type = ori._type;
	return *this;
}

AMateria* Cure::clone() const
{
	std::cout << BYEL << "Cure" << RESET << "\thas cloned" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << BR1G5B2 << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}