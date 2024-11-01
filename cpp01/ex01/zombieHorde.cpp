/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 02:19:47 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 03:03:44 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
  Zombie *horde;

  horde = new Zombie[n];
  
  for (int i = 0; i < n; i++)
    horde[i].setName(name);
	
  return (horde);
}