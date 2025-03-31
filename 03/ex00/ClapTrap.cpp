/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:23:29 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 12:29:06 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                            OrthodoxCanonicalForm                           */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(std::string name)
    : name(name), hitPoints(DEFAULT_HIT_POINTS),
      energyPoints(DEFAULT_ENERGY_POINTS), attackDamage(DEFAULT_ATTACK_DAMAGE)
{
	std::cout << "ClapTrap " << HMAG << this->name << RESET << " constructed"
	          << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &origin)
{
	*this = origin;
	std::cout << "ClapTrap " << HMAG << this->name << RESET << " copied"
	          << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << HMAG << this->name << RESET << " destroyed"
	          << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &origin)
{
	if (this != &origin)
	{
		this->name         = origin.name;
		this->hitPoints    = origin.hitPoints;
		this->energyPoints = origin.energyPoints;
		this->attackDamage = origin.attackDamage;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                                  Function                                  */
/* -------------------------------------------------------------------------- */

bool ClapTrap::isAlive() const
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << HMAG << this->name << RESET
		          << " is already down !" << std::endl;
		return false;
	}
	return true;
}

bool ClapTrap::haveEnergy() const
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << HMAG << this->name << RESET
		          << " is out of energy points !" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (ClapTrap::isAlive())
	{
		this->hitPoints -=
		    (amount > this->hitPoints) ? this->hitPoints : amount;
		std::cout << "ClapTrap " << HMAG << this->name << RESET << " took "
		          << RED << amount << RESET << " points of damage!"
		          << std::endl;
	}
}

void ClapTrap::attack(const std::string &target)
{
	if (ClapTrap::isAlive() && ClapTrap::haveEnergy())
	{
		--energyPoints;
		std::cout << "ClapTrap " << HMAG << name << RESET << " attacks " << MAG
		          << target << RESET << ", causing " << YEL << attackDamage
		          << RESET << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ClapTrap::isAlive() && ClapTrap::haveEnergy())
	{
		hitPoints += amount;
		std::cout << "ClapTrap " << HMAG << name << RESET
		          << " repairs itself, regaining " << GRN << amount << RESET
		          << " hit points!" << std::endl;
	}
}

void ClapTrap::displayStats()
{
	std::cout << "  " << MAG << name << RESET << std::endl;
	std::cout << "  |---" << HBLU << "HP: " << GRN << hitPoints << RESET
	          << std::endl;
	std::cout << "  |---" << HBLU << "EP: " << GRN << energyPoints << RESET
	          << std::endl;
	std::cout << "  |---" << HBLU << "AD: " << GRN << attackDamage << RESET
	          << std::endl;
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
	std::cout << "ClapTrap " << HMAG << name << RESET << " set AttackDamage to "
	          << YEL << newAttackDamage << RESET << std::endl;
	attackDamage = newAttackDamage;
}