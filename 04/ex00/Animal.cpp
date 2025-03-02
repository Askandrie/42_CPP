/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:26:31 by aska              #+#    #+#             */
/*   Updated: 2025/03/01 16:33:59 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &ori)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &ori)
        this->type = ori.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}