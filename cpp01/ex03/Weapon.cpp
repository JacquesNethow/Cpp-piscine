/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 03:24:03 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 04:32:01 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon(void) {}

Weapon::Weapon(const Weapon &other) : type(other.type) {}

const std::string &Weapon::getType(void) const 
{
	return (this->type); 
}

void Weapon::setType(std::string type) 
{ 
	this->type = type; 
}