/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:52:26 by aska              #+#    #+#             */
/*   Updated: 2025/03/06 01:07:04 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../colors/Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
  public:
	Ice();
	Ice(Ice const &ori);
	Ice &operator=(Ice const &ori);
	~Ice();
	AMateria *clone() const;
	void      use(ICharacter &target);
};