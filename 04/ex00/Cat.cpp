/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:03:01 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 04:21:09 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << CYA "Cat " RESET "constructor called" << std::endl;
}
Cat::Cat(const Cat &src) : Animal()
{
    std::cout << CYA "Cat " RESET "copy constructor called" << std::endl;
    *this = src;
}
Cat &Cat::operator=(const Cat &ori)
{
    std::cout << CYA "Cat " RESET "assignment operator called" << std::endl;
    if (this != &ori)
        this->type = ori.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << HRED "Cat destructor called" RESET << std::endl;
}
void Cat::makeSound() const
{
    std::cout << BOLD "Nya !" RESET << std::endl;
}