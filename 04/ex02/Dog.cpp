/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:40:14 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 02:12:48 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << HBLU << this->type << RESET << "\tdefault constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal()
{
    this->type = src.type;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        this->brain->ideas[i] = src.brain->ideas[i];
    std::cout << HBLU << this->type << RESET << "\tcopy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &ori)
{
    if (this != &ori)
    {
        this->type = ori.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain();
        for (int i = 0; i < 100; i++)
            this->brain->ideas[i] = ori.brain->ideas[i];
    }
    std::cout << HBLU << this->type << RESET << "\tassignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << RED << this->type << "\tdestructor called" << RESET << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setIdea(std::string idea, unsigned int i)
{
    if (i < MAX_IDEAS)
    {
        this->brain->ideas[i] = idea;
        return;
    }
    std::cerr << "Not in max idea range" << std::endl;
}

std::string Dog::getIdeas(unsigned int i) const
{

    if (!this->brain)
    {
        std::cerr << "Error: Brain is null, cannot get idea." << std::endl;
        return "";
    }
    if (i < MAX_IDEAS)
        return this->brain->ideas[i];
    return "";
}

void Dog::printAllIdeas()
{
    if (!this->brain)
    {
        std::cerr << "Error: Brain is null, cannot print ideas." << std::endl;
        return ;
    }
    int i = 0;
    while (i < MAX_IDEAS && !this->brain->ideas[i].empty())
        std::cout << this->brain->ideas[i++] << std::endl;
}