/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:59:06 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 01:39:12 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &ori);
        virtual ~Animal();
    
        virtual void makeSound() = 0;
        std::string getType() const;
};

#endif