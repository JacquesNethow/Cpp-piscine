/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:08:07 by jramondo          #+#    #+#             */
/*   Updated: 2023/09/02 05:18:45 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringReplace.hpp"

static inline void usage(std::string execname) {
  std::cerr << "Usage: " << execname << " FILE SEARCH REAPLACE" << std::endl;
}

int main(int argc, char *argv[]) {
  std::ifstream ifs;
  std::ofstream ofs;
  std::stringstream ss;

  if (argc != 4) {
    std::cerr << "Error: wrong number of arguments." << std::endl;
    usage(argv[0]);
    return (1);
  }
  
  ifs.open(argv[1]);
  if (ifs.fail()) {
    std::cerr << "Error: failed to open file: " << argv[1] << std::endl;
    usage(argv[0]);
    return (1);
  }
  
  ofs.open((std::string(argv[1]) + ".replace").c_str());
  if (ofs.fail()) {
    std::cerr << "Error: failed create replace file: " << argv[1] << std::endl;
    return (1);
  }

  ss << ifs.rdbuf();
  ofs << stringReplace(ss.str(), argv[2], argv[3]);
  ifs.close();
  ofs.close();
  
  return (0);
}