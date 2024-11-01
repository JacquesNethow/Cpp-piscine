/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 01:52:20 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 02:15:19 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
};

Zombie::Zombie(std::string name)
{
	this->name = name;
};

Zombie::Zombie(const Zombie &other)
{
	this->name = other.name;
};

Zombie::~Zombie(void) {
  std::cout << this->name << ": *dies again*" << std::endl;
}

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}