/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:01:11 by jramondo          #+#    #+#             */
/*   Updated: 2023/08/31 16:38:59 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
public:
	// o Construtor 
	PhoneBook( void );
	// o Desconstrutor
	~PhoneBook( void );
	// Manter o código rodando a espera de comandos
	bool	run( void );
	// Função de adicionar os contatos
	void	addNewContact( void );
	// Procurar os contatos
	void	searchContacts( void );
	// Printar os erros
	void	printError( std::string str );
	// Printar as colunas para apresentar os contatos
	void	print_column(std::string str);
	
private:
	Contact	contacts[8];
	int		total_contacts;
	int		contact_indexer;
};

#endif
