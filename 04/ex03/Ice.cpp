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
    std::cout << MAG << "Ice" << RESET << "\tdefault constructor called" << std::endl;
}
Ice::Ice(Ice const & ori) : AMateria(ori.getType())
{
    std::cout << MAG << "Ice" << RESET << "\tcopy constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << MAG << "Ice" << RED << "\tdestructor called" << RESET << std::endl;
}
Ice &Ice::operator=(Ice const & ori)
{
    if (this != &ori)
        this->_type = ori._type;
    return *this;
}
AMateria* Ice::clone() const
{
    return new Ice(*this);
}
void Ice::use(ICharacter& target)
{
    std::cout << HCYN << "* shoots an ice bolt at " << YEL << target.getName() << HCYN << " *" << RESET << std::endl;
}