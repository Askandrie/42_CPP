/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:04:54 by aska              #+#    #+#             */
/*   Updated: 2025/03/06 03:16:54 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
Character::Character(std::string name) : _name(name)
{
    std::cout << MAG << "Character" << RESET << "\tdefault constructor called" << std::endl;
    for (int i = 0; i < MAX_MATERIA; i++)
        this->_materia[i] = NULL;
}

Character::Character(Character const & ori)
{
    std::cout << MAG << "Character" << RESET << "\tcopy constructor called" << std::endl;
    *this = ori;
}
Character::~Character()
{
    std::cout << MAG << "Character" << RED << "\tdestructor called" << RESET << std::endl;
    for (int i = 0; i < MAX_MATERIA; i++)
        delete this->_materia[i];
}
Character &Character::operator=(Character const & ori)
{
    if (this != &ori)
    {
        this->_name = ori._name;
        for (int i = 0; i < MAX_MATERIA; i++)
        {
            delete this->_materia[i];
            if (ori._materia[i])
                this->_materia[i] = ori._materia[i]->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return *this;
}
const std::string &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *materia)
{
    for (int i = 0; i < MAX_MATERIA; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = materia;
            std::cout << BGRN << "Character" << RESET << " " << YEL << this->_name << RESET << " equipped " << BOLD << this->_materia[i]->getType() << RESET << std::endl;
            return ;
        }
    }
    std::cout << BRED << "Character" << RESET << " " << YEL << this->_name << RESET << " can't equip more materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= MAX_MATERIA || this->_materia[idx] == NULL)
    {
        std::cout << BRED << "Character" << RESET << " " << YEL << this->_name << RESET << " can't unequip materia" << std::endl;
        return ;
    }
    std::cout << BGRN << "Character" << RESET << " " << YEL << this->_name << RESET << " unequipped " << BOLD << this->_materia[idx]->getType() << RESET << std::endl;
    delete this->_materia[idx];
    this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= MAX_MATERIA || this->_materia[idx] == NULL)
    {
        std::cout << BRED << "Character" << RESET << " " << YEL << this->_name << RESET << " can't use materia" << std::endl;
        return ;
    }
    this->_materia[idx]->use(target);
}

AMateria*	Character::getMateria(int idx) const
{
    if (idx < 0 || idx >= MAX_MATERIA)
        return NULL;
    return this->_materia[idx];
}