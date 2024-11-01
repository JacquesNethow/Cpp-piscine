/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 03:08:33 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 03:19:18 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << std::endl;
  std::cout << "Addresses:" << std::endl;
  std::cout << "string: " << &string << std::endl;
  std::cout << "stringPTR: " << stringPTR << std::endl;
  std::cout << "stringREF: " << &stringREF << std::endl;
  std::cout << std::endl;
  
  std::cout << "Values:" << std::endl;
  std::cout << "string: " << string << std::endl;
  std::cout << "stringPTR: " << *stringPTR << std::endl;
  std::cout << "stringREF: " << stringREF << std::endl;
  std::cout << std::endl;
  
  return (0);
}