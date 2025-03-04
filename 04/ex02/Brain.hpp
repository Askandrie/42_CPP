/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:46:35 by aska              #+#    #+#             */
/*   Updated: 2025/03/03 17:34:58 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Colors.hpp"

#include <iostream>
#include <string>

#define MAX_IDEAS 100

class Brain
{
    public:
        Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &ori);
        ~Brain();
    
        std::string ideas[MAX_IDEAS];
};