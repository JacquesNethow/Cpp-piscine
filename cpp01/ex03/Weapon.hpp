/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 03:24:04 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 03:26:53 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon {
public:

  Weapon(std::string type);


  Weapon(const Weapon &other);


  ~Weapon(void);


  const std::string &getType(void) const;


  void setType(std::string type);

private:
  std::string type;
};

#endif