/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:19:12 by aska              #+#    #+#             */
/*   Updated: 2025/03/05 03:23:39 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"
# include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << MAG << "Cure" << RESET << "\tdefault constructor called" << std::endl;
}
Cure::Cure(Cure const & ori) : AMateria(ori)
{
    std::cout << MAG << "Cure" << RESET << "\tcopy constructor called" << std::endl;
}
Cure::~Cure()
{
    std::cout << MAG << "Cure" << RESET << "\tdestructor called" << std::endl;
}
Cure &Cure::operator=(Cure const & ori)
{
    if (this != &ori)
        this->_type = ori._type;
    return *this;
}
AMateria* Cure::clone() const
{
    return new Cure(*this);
}
void Cure::use(ICharacter& target)
{
    std::cout << MAG << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}