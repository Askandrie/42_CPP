/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:46:27 by aska              #+#    #+#             */
/*   Updated: 2025/03/13 04:17:52 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

#define CAT_TYPE "Cat"

class Cat : public Animal
{
  public:
	Cat(std::string type = CAT_TYPE);
	Cat(const Cat &src);
	Cat &operator=(const Cat &ori);
	~Cat();

	void makeSound() const;
};
