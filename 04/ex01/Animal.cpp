/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:26:31 by aska              #+#    #+#             */
/*   Updated: 2025/03/03 17:14:50 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << BLU <<"Animal" << RESET << "\tdefault constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << BLU <<"Animal" << RESET << "\tcopy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &ori)
{
    std::cout << BLU <<"Animal" << RESET << "\tassignment operator called" << std::endl;
    if (this != &ori)
        this->type = ori.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << RED <<"Animal" << "\tdestructor called" << RESET << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}