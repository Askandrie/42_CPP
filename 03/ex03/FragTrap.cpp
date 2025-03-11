/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:13:23 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 17:56:38 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            OrthodoxCanonicalForm                           */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoints = DEFAULT_FRAGTRAP_HIT_POINTS;
    this->energyPoints = DEFAULT_FRAGTRAP_ENERGY_POINTS;
    this->attackDamage = DEFAULT_FRAGTRAP_ATTACK_DAMAGE;
    std::cout << "FragTrap\t" << HMAG << name << RESET << "\tconstructed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = DEFAULT_FRAGTRAP_HIT_POINTS;
    this->energyPoints = DEFAULT_FRAGTRAP_ENERGY_POINTS;
    this->attackDamage = DEFAULT_FRAGTRAP_ATTACK_DAMAGE;
    std::cout << "FragTrap\t" << HMAG << this->name << RESET << "\tconstructed with parameter" << std::endl;
}

FragTrap::FragTrap(FragTrap const &origin) : ClapTrap(origin.name)
{
    *this = origin;
    std::cout << "FragTrap\t" << HMAG << name << RESET << "\tcopied" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap\t" << HMAG << name << RESET << "\tdestroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &origin)
{
    if(this != &origin)
    {
        name = origin.name;
        hitPoints = origin.hitPoints;
        energyPoints = origin.energyPoints;
        attackDamage = origin.attackDamage;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Function                                  */
/* -------------------------------------------------------------------------- */

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}