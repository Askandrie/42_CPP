/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:52:26 by aska              #+#    #+#             */
/*   Updated: 2025/03/06 01:07:04 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Colors.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & ori);
        Cure &operator=(Cure const & ori);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
}