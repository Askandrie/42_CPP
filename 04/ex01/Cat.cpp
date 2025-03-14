/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:03:01 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 03:09:01 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << HBLU << this->type << RESET << "\tdefault constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal()
{
    this->type = src.type;
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        this->brain->ideas[i] = src.brain->ideas[i];
    std::cout << HBLU << this->type << RESET << "\tcopy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &ori)
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

Cat::~Cat()
{
    delete this->brain;
    std::cout << RED << this->type << "\tdestructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Nya !" << std::endl;
}

void Cat::setIdea(std::string idea, unsigned int i)
{
    if (i < MAX_IDEAS)
    {
        this->brain->ideas[i] = idea;
        return;
    }
    std::cerr << "Not in max idea range" << std::endl;
}

std::string Cat::getIdeas(unsigned int i) const
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

void Cat::printAllIdeas()
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