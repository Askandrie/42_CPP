/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:23:29 by aska              #+#    #+#             */
/*   Updated: 2025/02/28 16:44:24 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            OrthodoxCanonicalForm                           */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap() : name("default"), hitPoints(DEFAULT_HIT_POINTS), energyPoints(DEFAULT_ENERGY_POINTS), attackDamage(DEFAULT_ATTACK_DAMAGE)
{
    std::cout << "ClapTrap\t" << HMAG << name << RESET << "\tconstructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(DEFAULT_HIT_POINTS), energyPoints(DEFAULT_ENERGY_POINTS), attackDamage(DEFAULT_ATTACK_DAMAGE)
{
    std::cout << "ClapTrap\t" << HMAG << this->name << RESET << "\tconstructed with parameter" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &origin)
{
    *this = origin;
    std::cout << "ClapTrap\t" << HMAG << name << RESET << "\tcopied" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap\t" << HMAG << name << RESET << "\tdestroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &origin)
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << HMAG << name << RESET << " is already down !" << std::endl;
        return ;
    }
    hitPoints -= (amount > hitPoints) ? hitPoints : amount;
    std::cout << "ClapTrap " << HMAG << name << RESET << " took " << RED << amount << RESET << " points of damage!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints == 0 || energyPoints == 0)
    {
        if (hitPoints == 0)
            std::cout << "ClapTrap " << HMAG << name << RESET << " can't attack because it's out of hit points" << std::endl;
        if (energyPoints == 0)
            std::cout << "ClapTrap " << HMAG << name << RESET << " can't attack because it's out of energy points" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << HMAG << name << RESET << " attacks " << MAG << target << RESET <<", causing " << YEL << attackDamage << RESET << " points of damage!" << std::endl;
    --energyPoints;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0 || energyPoints == 0)
    {
        if (hitPoints == 0)
            std::cout << "ClapTrap " << HMAG << name << RESET << " can't heal because it's out of hit points" << std::endl;
        if (energyPoints == 0)
            std::cout << "ClapTrap " << HMAG << name << RESET << " can't heal because it's out of energy points" << std::endl;
        return ;
    }
    hitPoints += amount;
    if (hitPoints > DEFAULT_HIT_POINTS)
        hitPoints = DEFAULT_HIT_POINTS;
    std::cout << "ClapTrap " << HMAG << name << RESET << " repairs itself, regaining " << HGRN << amount << RESET << " hit points!" << std::endl;
}

void ClapTrap::displayStats()
{
    std::cout << MAG << name << RESET << std::endl;
    std::cout << "|---" << HBLU << "HP:\t" << HGRN << hitPoints << RESET << std::endl;
    std::cout << "|---" << HBLU << "EP:\t" << HGRN << energyPoints << RESET << std::endl;
    std::cout << "|---" << HBLU << "AD:\t" << HGRN << attackDamage << RESET << std::endl;
    std::cout << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                   Getters                                  */
/* -------------------------------------------------------------------------- */

std::string ClapTrap::getName() const
{
    return name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attackDamage;
}

/* -------------------------------------------------------------------------- */
/*                                   Setters                                  */
/* -------------------------------------------------------------------------- */

void ClapTrap::setAttackDamage(unsigned int newAttackDamage)
{
    std::cout << "ClapTrap " << HMAG << name << RESET << "\tset AttackDamage to " << YEL << newAttackDamage << RESET <<std::endl;
    attackDamage = newAttackDamage;
}