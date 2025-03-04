/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:34:25 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 02:12:46 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Colors.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &ori);
        ~Dog();
    
        virtual void makeSound();
        void setIdea(std::string idea, unsigned int i);
        std::string getIdeas(unsigned int i) const;
        void printAllIdeas();
};

#endif