/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:59:06 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 01:39:12 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "../../Colors.hpp"
#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string type;
    
    public:
        AAnimal();
        AAnimal(const AAnimal &src);
        AAnimal &operator=(const AAnimal &ori);
        virtual ~AAnimal();
    
        virtual void makeSound() = 0;
        std::string getType() const;
};

#endif