/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:59:06 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 02:53:20 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "../../Colors.hpp"
#include <iostream>
#include <string>

#define DEFAULT_ANIMAL_TYPE "Animal"

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal(std::string type = DEFAULT_ANIMAL_TYPE);
        Animal(const Animal &src);
        Animal &operator=(const Animal &ori);
        virtual ~Animal();
    
        virtual void makeSound() const;
        std::string getType() const;
};

#endif