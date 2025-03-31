/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 04:30:49 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 17:53:19 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),
      FragTrap(name + "_clap_name")
{
	this->_name = name;
	std::cout << "DiamondTrap\t" << HMAG << this->_name << RESET
	          << "\tconstructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin)
    : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),
      FragTrap(name + "_clap_name")
{
	*this = origin;
	std::cout << "DiamondTrap\t" << HMAG << _name << RESET << "\tcopied"
	          << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap\t" << HMAG << _name << RESET << "\tdestroyed"
	          << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &origin)
{
	if (this != &origin)
		_name = origin._name;
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	// std::cout << "ClapTrap's name is " << this->get_name() << std::endl;
}