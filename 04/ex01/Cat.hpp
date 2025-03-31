/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:46:27 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 14:49:12 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../colors/Colors.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
  private:
	Brain *brain;

  public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &ori);
	~Cat();

	void        makeSound() const;
	void        setIdea(std::string idea, unsigned int i);
	std::string getIdeas(unsigned int i) const;
	void        printAllIdeas();
};
