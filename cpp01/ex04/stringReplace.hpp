/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:08:10 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 05:22:20 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_REPLACE_HPP
#define STR_REPLACE_HPP

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

#define ALL_MATCHES -1


std::string stringReplace(const std::string &str, const std::string &searchStr, const std::string &replaceStr, int count = ALL_MATCHES);

#endif