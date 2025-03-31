/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:04:54 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 12:42:12 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iomanip>

Character::Character(std::string name) : _name(name)
{
	std::cout << BR5G4B2 "Character" RESET << "\tconstructor:\t" << (long)this
	          << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		this->_materia[i] = NULL;
}

Character::Character(Character const &ori) : _name(ori.getName() + "_copy")
{
	std::cout << BR5G4B2 "Character" RESET << "\tcopy const.:\t" << (long)this
	          << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if ((ori._materia)[i])
			(this->_materia)[i] = (ori._materia[i])->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << BR5G4B2 "Character" RED << "\tdestructor:\t" << RESET
	          << (long)this << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++)
		if (this->_materia[i] != NULL)
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
}

Character &Character::operator=(Character const &ori)
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
		std::cout << BR5G4B2 << this->_name << " has no this materia" RESET
		          << std::endl;
		return;
	}
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (this->_materia[i] == NULL && materia->isEquiped() == false)
		{
			this->_materia[i] = materia;
			this->_materia[i]->setEquiped(true);
			std::cout << BR5G4B2 << this->_name << " equipped " << BOLD
			          << this->_materia[i]->getType() << RESET << std::endl;
			return;
		}
	}
	std::cout << BR5G4B2 << this->_name << " can't equip materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= MAX_MATERIA || this->_materia[idx] == NULL)
	{
		std::cout << BR5G4B2 << this->_name << " can't unequip materia" RESET
		          << std::endl;
		return;
	}
	std::cout << BR5G4B2 << this->_name << " unequipped " << BOLD
	          << this->_materia[idx]->getType() << RESET << std::endl;
	this->_materia[idx]->setEquiped(false);
	this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= MAX_MATERIA || this->_materia[idx] == NULL)
	{
		std::cout << BR5G4B2 << this->_name << " can't use materia" RESET
		          << std::endl;
		return;
	}
	this->_materia[idx]->use(target);
}

AMateria *Character::getMateria(int idx) const
{
	if (idx < 0 || idx >= MAX_MATERIA)
		return NULL;
	return this->_materia[idx];
}