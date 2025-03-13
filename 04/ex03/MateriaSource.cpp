/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:45:54 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 17:02:58 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << HMAG << "MateriaSource" << RESET << "\tconstructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_model[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & ori)
{
	std::cout << HMAG << "MateriaSource" << RESET << "\tcopy constructor" << std::endl;
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
	std::cout << HMAG << "MateriaSource" << RED << "\tdestructor" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		if (_model[i])
			delete _model[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const & ori)
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

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_model[i] == NULL)
		{
			std::cout << HMAG << "MateriaSource " << BWHI << materia->getType() << RESET << " learned" << std::endl;
			_model[i] = materia;
			return;
		}
	}
    std::cout << HMAG << "MateriaSource" << BWHI << materia->getType() << RESET << " has no slot available" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_model[i] && _model[i]->getType() == type)
			return _model[i]->clone();
	}
	std::cout << HMAG << "MateriaSource" << BWHI << type << RESET << " has no " << type << " materia" << std::endl;
	return NULL;
}
