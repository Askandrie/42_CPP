/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:52:26 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 14:02:33 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../colors/Colors.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
  public:
	Cure();
	Cure(Cure const &ori);
	~Cure();

	Cure &operator=(Cure const &ori);

	AMateria *clone() const;
	void      use(ICharacter &target);
};