/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiffie <ygaiffie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:37:44 by ygaiffie          #+#    #+#             */
/*   Updated: 2024/11/12 13:43:18 by ygaiffie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
#define COLORS_HPP

#include <string>

const std::string RESET = "\033[0m";
const std::string BOLD = "\033[1m";
const std::string UND = "\033[4m";

const std::string BLK = "\033[30m";
const std::string RED = "\033[31m";
const std::string GRN = "\033[32m";
const std::string YEL = "\033[33m";
const std::string BLU = "\033[34m";
const std::string MAG = "\033[35m";
const std::string CYN = "\033[36m";
const std::string WHT = "\033[37m";

const std::string BBLK = "\033[1,30m";
const std::string BRED = "\033[1,31m";
const std::string BGRN = "\033[1,32m";
const std::string BYEL = "\033[1,33m";
const std::string BBLU = "\033[1,34m";
const std::string BMAG = "\033[1,35m";
const std::string BCYN = "\033[1,36m";
const std::string BWHT = "\033[1,37m";

const std::string HBLK = "\033[0,90m";
const std::string HRED = "\033[0,91m";
const std::string HGRN = "\033[0,92m";
const std::string HYEL = "\033[0,93m";
const std::string HBLU = "\033[0,94m";
const std::string HMAG = "\033[0,95m";
const std::string HCYN = "\033[0,96m";
const std::string HWHT = "\033[0,97m";

const std::string BHBLK = "\033[1,90m";
const std::string BHRED = "\033[1,91m";
const std::string BHGRN = "\033[1,92m";
const std::string BHYEL = "\033[1,93m";
const std::string BHBLU = "\033[1,94m";
const std::string BHMAG = "\033[1,95m";
const std::string BHCYN = "\033[1,96m";
const std::string BHWHT = "\033[1,97m";

#endif