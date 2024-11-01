/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:28:46 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 05:29:30 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
public:

  Harl(void);


  ~Harl(void);

 
  void complain(std::string level);

private:
 
  void debug(void);


  void info(void);


  void warning(void);


  void error(void);


  void invalid(void);
};

#endif