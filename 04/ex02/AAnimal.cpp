/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:26:31 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 01:41:09 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
    std::cout << BLU <<"AAnimal" << RESET << "\tdefault constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
    std::cout << BLU <<"AAnimal" << RESET << "\tcopy constructor called" << std::endl;
    *this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &ori)
{
    std::cout << BLU <<"AAnimal" << RESET << "\tassignment operator called" << std::endl;
    if (this != &ori)
        this->type = ori.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << RED <<"AAnimal" << "\tdestructor called" << RESET << std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}