/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:00:41 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/13 17:05:27 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << HBLU << "OBJ Created" << RESET << std::endl;
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
	std::cout << HYEL << name << RESET << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->name = name;
}