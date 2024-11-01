/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 02:19:42 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 03:04:26 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  Zombie *horde;
  
  std::stringstream counter;
  
  for (int n = 0; n < 6; n++) {
    counter << n;
    horde = zombieHorde(n, "horde-" + counter.str());
	
    for (int i = 0; i < n; i++) {
      horde[i].announce();
    }
    counter.str(std::string());
    delete[] horde;
  }
  return (0);
}