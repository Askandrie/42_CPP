/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:03:01 by aska              #+#    #+#             */
/*   Updated: 2025/03/01 16:18:48 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}
Cat::Cat(const Cat &src) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}
Cat &Cat::operator=(const Cat &ori)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &ori)
        this->type = ori.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Nya !" << std::endl;
}