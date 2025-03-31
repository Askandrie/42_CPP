/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:26:31 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 03:36:16 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type(type)
{
	std::cout << CYA "Animal " RESET "constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << CYA "Animal " RESET "copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &ori)
{
	std::cout << MAG "Animal " RESET "assignment operator called" << std::endl;
	if (this != &ori)
		this->type = ori.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << HRED "Animal destructor called" RESET << std::endl;
}

void Animal::makeSound() const
{
	std::cout << BOLD << "Animal sound" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}