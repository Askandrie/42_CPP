/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:46:35 by aska              #+#    #+#             */
/*   Updated: 2025/03/14 14:49:12 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../Colors.hpp"

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