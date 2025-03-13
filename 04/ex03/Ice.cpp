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
    std::cout << BR0G2B5 << "Ice" << RESET << "\tconstructor" << std::endl;
}
Ice::Ice(Ice const & ori) : AMateria(ori.getType())
{
    std::cout << BR0G2B5 << "Ice" << RESET << "\tcopy constructor" << std::endl;
}
Ice::~Ice()
{
    std::cout << BR0G2B5 << "Ice" << RED << "\tdestructor" << RESET << std::endl;
}
Ice &Ice::operator=(Ice const & ori)
{
    if (this != &ori)
        this->_type = ori._type;
    return *this;
}
AMateria* Ice::clone() const
{
	std::cout << BR0G2B5 << "Ice" << RESET << "\thas cloned" << std::endl;
	return new Ice(*this);
}
void Ice::use(ICharacter& target)
{
    std::cout << HCYA << "* shoots an ice bolt at " << BYEL << target.getName() << HCYA << " *" << RESET << std::endl;
}