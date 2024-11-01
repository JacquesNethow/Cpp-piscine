/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:14:43 by jramondo          #+#    #+#             */
/*   Updated: 2023/08/25 00:24:37 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string up_case(std::string src_str)
{
	for (size_t i = 0; i < src_str.length(); i++)
		src_str[i] = toupper(src_str[i]);
	return (src_str);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::cout << up_case(argv[i]);
			if (argc >= 2)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
