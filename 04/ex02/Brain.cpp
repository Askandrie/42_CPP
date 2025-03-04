/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:51:46 by aska              #+#    #+#             */
/*   Updated: 2025/03/03 17:37:59 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << MAG << "Brain" << RESET <<"\tdefault constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << MAG << "Brain" << RESET <<"\tcopy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &ori)
{
    if (this != &ori)
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ori.ideas[i];
    return *this;
    std::cout << MAG << "Brain" << RESET <<"\tassignment operator called" << std::endl;
}

Brain::~Brain()
{
    std::cout << RED << "Brain\tdestructor called" << RESET << std::endl;
}