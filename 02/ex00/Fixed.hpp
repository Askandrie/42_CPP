/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:50:19 by ygaiffie          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:35 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define HGRE "\033[0;32m"
#define HBLU "\033[0;34m"
#define HMAG "\033[0;35m"
#define MAG "\033[0;35m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

#define FRACTIONAL_BITS 8

class Fixed
{
	public:
		Fixed(); // Constructeur par default
		Fixed(const Fixed &origin); // Constructeur par copie
		Fixed &operator=(const Fixed &origin); // Operateur d'affectation par copie
		~Fixed(); // Destructeur
		// Fixed(Fixed &&) noexcept; // Constructeur par deplacement
		// Fixed &operator=(Fixed &&) noexcept; // Operateur d'affectation par deplacement
		int		getRawBits();
		void	setRawBits(const int raw);
		
	private:
		int 				_fixed_point;
		static const int	_fractional_bit = FRACTIONAL_BITS;
};

#endif