/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 02:19:46 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 02:29:01 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>

class Zombie {
public:

  Zombie(void);

  Zombie(std::string name);

  Zombie(const Zombie &other);

  ~Zombie(void);
  
  void announce(void);

  void setName(std::string name) 
  { 
	this->name = name;
  }

private:
  std::string name;
};

Zombie *zombieHorde(int n, std::string name);

#endif