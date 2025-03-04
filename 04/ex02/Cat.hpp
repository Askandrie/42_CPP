/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:46:27 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 02:12:54 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include "Colors.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
    private:
        Brain *brain;
        
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &ori);
        ~Cat();
    
        virtual void makeSound();
        void setIdea(std::string idea, unsigned int i);
        std::string getIdeas(unsigned int i) const;
        void printAllIdeas();
};

