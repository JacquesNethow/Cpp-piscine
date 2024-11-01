/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 03:23:53 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 04:16:42 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:

  HumanA(std::string name, Weapon &weapon);

  ~HumanA(void);

  void attack(void);

private:
  std::string 	name;
  Weapon		&weapon;
};

#endif