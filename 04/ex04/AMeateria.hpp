/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMeateria.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aska <aska@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:35:27 by aska              #+#    #+#             */
/*   Updated: 2025/03/04 03:43:34 by aska             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class AMateria
{
    protected:
        std::string const _type;

    public:
        AMateria();
        AMateria(std::string const & type);
        

}