/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:04:54 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 17:17:48 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    std::cout << "Character " BWHI << this->_name << RESET << "\tconstructor" << std::endl;
    for (int i = 0; i < MAX_MATERIA; i++)
        this->_materia[i] = NULL;
}

Character::Character(Character const & ori) : _name(ori.getName() + "_copy")
{
    std::cout << "Character " BWHI << this->_name << RESET << "\tcopy constructor" << std::endl;
    for(int i = 0; i < MAX_MATERIA; i++)
	{
		if ((ori._materia)[i])
			(this->_materia)[i] = (ori._materia[i])->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character::~Character()
{
    std::cout << RED "Character " BWHI << this->_name << "\tdestructor" << RESET << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		if (this->_materia[i] != NULL)
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
}

Character &Character::operator=(Character const & ori)
{
    if (this != &ori)
    {
        this->_name = ori.getName();
        for (int i = 0; i < MAX_MATERIA; i++)
        {
            if (ori._materia[i] != NULL)
            {
                delete this->_materia[i];
                this->_materia[i] = ori._materia[i]->clone();
            }
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
	if (materia == NULL)
	{
		std::cout << BRED << "Character " BWHI << this->_name << RESET << " has no this materia" << std::endl;
		return ;
	}
    for (int i = 0; i < MAX_MATERIA; i++)
    {
        if (this->_materia[i] == NULL && materia->isEquiped() == false)
        {
            this->_materia[i] = materia;
			this->_materia[i]->setEquiped(true);
            std::cout << "Character" RESET " " YEL << this->_name << RESET << " equipped " << BOLD << this->_materia[i]->getType() << RESET << std::endl;
            return ;
        }
    }
    std::cout << "Character " YEL << this->_name << RESET << " can't equip materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= MAX_MATERIA || this->_materia[idx] == NULL)
    {
        std::cout << BRED << "Character" << RESET << " " << YEL << this->_name << RESET << " can't unequip materia" << std::endl;
        return ;
    }
    std::cout << BGRE << "Character" << RESET << " " << YEL << this->_name << RESET << " unequipped " << BOLD << this->_materia[idx]->getType() << RESET << std::endl;
    this->_materia[idx]->setEquiped(false);
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