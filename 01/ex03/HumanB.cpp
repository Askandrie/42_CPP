/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:12:25 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 13:33:01 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->is_armed = false;
	std::cout << this->name << " is here" << std::endl;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	this->is_armed = true;
	std::cout << this->name << " loot a " << this->weapon->getType() << std::endl;
}

void HumanB::attack(void)
{
    if (this->is_armed)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with his fists." << std::endl;
}