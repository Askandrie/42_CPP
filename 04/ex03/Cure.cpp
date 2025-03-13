/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:19:12 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 17:05:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << BR1G5B2 << "Cure" << RESET << "\tconstructor" << std::endl;
}

Cure::Cure(Cure const & ori) : AMateria(ori.getType())
{
    std::cout << BR1G5B2 << "Cure" << RESET << "\tcopy constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << BR1G5B2 << "Cure" << RED << "\tdestructor" << RESET << std::endl;
}

Cure &Cure::operator=(Cure const & ori)
{
	if (this != &ori)
		this->_type = ori._type;
	return *this;
}

AMateria* Cure::clone() const
{
	std::cout << BR1G5B2 << "Cure" << RESET << "\thas cloned" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << HGRE << "* heals " << BYEL << target.getName() << HGRE << "'s wounds *" << RESET << std::endl;
}