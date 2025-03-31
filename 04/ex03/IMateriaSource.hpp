/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:29:58 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 13:04:22 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../colors/Colors.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class IMateriaSource
{
  public:
	virtual ~IMateriaSource() {}

	virtual void      learnMateria(AMateria *)               = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};