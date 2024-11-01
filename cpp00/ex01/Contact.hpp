/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:01:03 by jramondo          #+#    #+#             */
/*   Updated: 2023/08/29 03:54:07 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

class Contact
{
public:
	// o Construtor
	Contact( void );
	// o Desconstrutor
	~Contact();
	// Funções para atribuir valores de Contatos
	void	setId( int id );
	void	setFirstName( void );
	void	setLastName( void );
	void	setNickName( void );
	void	setPhoneNumber( void );
	void	setDarkestSecret( void );

	int			getId()	const;
	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string getPhoneNumber( void ) const;
	std::string getDarkestSecret( void ) const;
	bool		isAlphabetic( std::string &str );
	bool		isNumeric(std::string &str);
	std::string	getAlphaVar( std::string varname );
	std::string	getNumericVar( std::string varname );
	bool		checkEmptyString(std::string str);

private:
	int			_id;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif
