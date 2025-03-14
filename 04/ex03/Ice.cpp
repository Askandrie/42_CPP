/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 02:19:12 by aska              #+#    #+#             */
/*   Updated: 2025/03/06 01:49:34 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << BYEL << "Ice\t" << RESET << "\tconstructor:\t" << (long)this << std::endl;
}
Ice::Ice(Ice const & ori) : AMateria(ori.getType())
{
    std::cout << BYEL << "Ice\t" << RESET << "\tcopy const.:\t" << (long)this << std::endl;
}
Ice::~Ice()
{
    std::cout << BYEL << "Ice\t" << RED << "\tdestructor:\t" << RESET << (long)this << std::endl;
}
Ice &Ice::operator=(Ice const & ori)
{
    if (this != &ori)
        this->_type = ori._type;
    return *this;
}
AMateria* Ice::clone() const
{
	std::cout << BR0G2B5 << "Ice" << BWHI << " has cloned" RESET << std::endl;
	return new Ice(*this);
}
void Ice::use(ICharacter& target)
{
    std::cout << BR0G2B5 << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}