/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:28:14 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 16:12:25 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & ori);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const & ori);

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *_model[4];
};