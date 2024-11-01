/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 01:47:46 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 01:49:50 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:

  Zombie(void);

  Zombie(std::string name);

  Zombie(const Zombie &other);

  ~Zombie(void);
  
  void announce(void);

private:
  std::string name;
};

Zombie *newZombie(std::string name);

void randomChump(std::string name);

#endif