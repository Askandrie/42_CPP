/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:35:27 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 17:16:23 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "../../Colors.hpp"
#include "ICharacter.hpp"

#define DEFAULT_MATERIA_TYPE "unknown"

class ICharacter ;

class AMateria
{
	protected:
		std::string		_type;
		long			_ID;
		bool			_isEquiped;

	public:
		AMateria(std::string const & type = DEFAULT_MATERIA_TYPE);
		AMateria(AMateria const & ori);
		virtual ~AMateria();

		AMateria	&operator=(AMateria const & ori);

		virtual std::string const	&getType() const;
		virtual AMateria 			*clone() const = 0;
		virtual void				use(ICharacter& target);

		virtual bool				isEquiped() const;
		virtual void				setEquiped(bool equiped);
};