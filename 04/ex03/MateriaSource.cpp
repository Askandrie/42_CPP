/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:45:54 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/14 12:41:54 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << BYEL << "MateriaSource" << RESET << "\tconstructor:\t"
	          << (long)this << std::endl;
	for (int i = 0; i < 4; i++)
		_model[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ori)
{
	std::cout << BYEL << "MateriaSource" << RESET << "\tcopy const.:\t"
	          << (long)this << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (ori._model[i])
			_model[i] = ori._model[i]->clone();
		else
			_model[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << BYEL << "MateriaSource" << RED << "\tdestructor:\t" << RESET
	          << (long)this << std::endl;
	for (int i = 0; i < 4; i++)
		if (_model[i])
			delete _model[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ori)
{
	if (this != &ori)
	{
		for (int i = 0; i < 4; i++)
		{
			if (ori._model[i])
			{
				_model[i]->~AMateria();
				_model[i] = ori._model[i]->clone();
			}
			else
				_model[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_model[i] == NULL)
		{
			std::cout << BR5G3B5 "MateriaSource " << materia->getType()
			          << " learned" RESET << std::endl;
			_model[i] = materia;
			return;
		}
	}
	std::cout << BR5G3B5 "MateriaSource " << materia->getType()
	          << " has no slot available" RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_model[i] && _model[i]->getType() == type)
			return _model[i]->clone();
	}
	std::cout << BR5G3B5 "MateriaSource" << type << " has no " << type
	          << " materia" RESET << std::endl;
	return NULL;
}
