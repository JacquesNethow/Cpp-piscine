/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:08:09 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 05:10:43 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplace.hpp"


std::string stringReplace(const std::string &str, const std::string &searchStr, const std::string &replaceStr, int count)
{
  size_t start;
  size_t search;
  int substitutions;
  
  std::stringstream buf;

  if (str.empty() || searchStr.empty())
  {
    return (str);
  }
  
  start = 0;
  search = str.find(searchStr);
  substitutions = 0;
  
  while (search != std::string::npos) 
  {
    if (count != ALL_MATCHES && substitutions++ == count) 
	{
      break;
    }
    buf << str.substr(start, search - start) << replaceStr;
    start = search + searchStr.length();
    search = str.find(searchStr, start);
  }
  
  buf << str.substr(start);
  
  return (buf.str());
}