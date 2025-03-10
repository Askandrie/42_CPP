/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:13:23 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 00:01:47 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            OrthodoxCanonicalForm                           */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = DEFAULT_SCAVTRAP_HIT_POINTS;
    this->energyPoints = DEFAULT_SCAVTRAP_ENERGY_POINTS;
    this->attackDamage = DEFAULT_SCAVTRAP_ATTACK_DAMAGE;
    this->gateState = false;
    std::cout << "ScavTrap\t" << HMAG << this->name << RESET << "\tconstructed with parameter" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &origin) : ClapTrap(origin.name)
{
    *this = origin;
    this->gateState = origin.gateState;
    std::cout << "ScavTrap\t" << HMAG << name << RESET << "\tcopied" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap\t" << HMAG << name << RESET << "\tdestroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &origin)
{
    if(this != &origin)
    {
        name = origin.name;
        hitPoints = origin.hitPoints;
        energyPoints = origin.energyPoints;
        attackDamage = origin.attackDamage;
        gateState = origin.gateState;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Function                                  */
/* -------------------------------------------------------------------------- */

void ScavTrap::guardGate()
{
    if (ClapTrap::isAlive() == false)
        return;
    if (gateState)
        std::cout << "ScavTrap " << HMAG << name << RESET << " is already in Gate keeper mode" << std::endl;
    else
    {
        gateState = true;
        std::cout << "ScavTrap " << HMAG << name << RESET << " is now in Gate keeper mode" << std::endl;
    }
}

void ScavTrap::displayStats()
{
    std::cout << MAG << name << RESET << std::endl;
    std::cout << "|---" << HBLU << "HP:\t" << HGRN << hitPoints << RESET << std::endl;
    std::cout << "|---" << HBLU << "EP:\t" << HGRN << energyPoints << RESET << std::endl;
    std::cout << "|---" << HBLU << "AD:\t" << HGRN << attackDamage << RESET << std::endl;
    std::cout << "|---" << HBLU << "GS:\t" << HGRN << (gateState ? "ON" : "OFF") << RESET << std::endl;
    std::cout << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (ClapTrap::isAlive() && ClapTrap::haveEnergy())
    {
        --energyPoints;
        std::cout << "ScavTrap " << HMAG << name << RESET << " uses a super ScavTrap attack on " << target << " which results in " << attackDamage << " damage points!\n";    --energyPoints;
    }
}