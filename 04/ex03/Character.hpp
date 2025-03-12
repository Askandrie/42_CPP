/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 02:22:25 by aska              #+#    #+#             */
/*   Updated: 2025/03/12 02:32:51 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Colors.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define DEFAULT_NAME "unknown"
#define MAX_MATERIA 4

class Character : virtual public ICharacter
{
    public:
        Character(std::string name = DEFAULT_NAME);
        Character(Character const & ori);
        ~Character();
        
        Character &operator=(Character const & ori);

        const std::string   &getName() const;
        void                equip(AMateria *materia);
        void                unequip(int idx);
        void                use(int idx, ICharacter &target);
        AMateria*	        getMateria(int idx) const;
    private:
        std::string const _name;
        AMateria* _materia[MAX_MATERIA];
}