/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:02:00 by aska              #+#    #+#             */
/*   Updated: 2025/03/02 01:02:47 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}
WrongCat &WrongCat::operator=(const WrongCat &ori)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &ori)
        this->type = ori.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "Nyo !" << std::endl;
}