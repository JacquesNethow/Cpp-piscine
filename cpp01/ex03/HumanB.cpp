/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 03:23:58 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 04:40:37 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon) 
{ 
	this->weapon = &weapon; 
}

void HumanB::attack(void) 
{
  std::string equipped;

  equipped = this->weapon != NULL ? this->weapon->getType() : "Hands";
  std::cout << this->name << " attacks with their " << equipped << std::endl;
}