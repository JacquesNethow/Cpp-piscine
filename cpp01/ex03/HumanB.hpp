/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 03:23:55 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 03:44:30 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
public:

  HumanB(std::string name);

  ~HumanB(void);

  void setWeapon(Weapon &weapon);

  void attack(void);

private:
  std::string	name;
  Weapon		*weapon;
};

#endif