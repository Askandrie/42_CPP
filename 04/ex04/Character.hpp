/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 02:22:25 by aska              #+#    #+#             */
/*   Updated: 2025/03/06 02:40:22 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Colors.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_MATERIA 4

class Character : virtual public ICharacter
{
    public:
        Character(std::string name);
        Character(Character const & ori);
        Character &operator=(Character const & ori);
        ~Character();

        const std::string &getName() const;
        void equip(AMateria *materia);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        AMateria*	getMateria(int idx) const;
    private:
        std::string _name;
        AMateria* _materia[MAX_MATERIA];
}