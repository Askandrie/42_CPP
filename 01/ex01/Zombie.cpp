/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:41 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/05 12:48:10 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << HBLU << "Zombie Created" << RESET << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << HBLU << name << " Created" << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << HRED << name << " Destroyed" << RESET << std::endl;
}

void Zombie::announce()
{
	std::cout << HYEL << name << RESET << ": "
	          << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->name = name;
}