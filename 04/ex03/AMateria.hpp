/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:35:27 by aska              #+#    #+#             */
/*   Updated: 2025/03/11 22:45:30 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define DEFAULT_MATERIA_TYPE "unknown"

class AMateria
{
	protected:
		std::string const _type;

	public:
		AMateria(std::string const & type = DEFAULT_MATERIA_TYPE);
		virtual ~AMateria();

		AMateria	&operator=(AMateria const & ori);

		virtual std::string const	&getType() const;
		virtual AMateria 			*clone() const = 0;
		virtual void				use(ICharacter& target);
};