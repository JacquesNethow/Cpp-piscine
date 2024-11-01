/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 01:46:26 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 02:10:04 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	
	Zombie *marvin;
  
	Zombie Bob("Bob");
	
	Zombie BobCopy(Bob);
  
	Bob.announce();
	BobCopy.announce();
	marvin = newZombie("marvin");
	marvin->announce();
	
	delete marvin;
	
	randomChump("Jax");
  
  return (0);
}