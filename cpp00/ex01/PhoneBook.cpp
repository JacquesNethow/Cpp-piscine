/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramondo <jramondo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:01:08 by jramondo          #+#    #+#             */
/*   Updated: 2023/08/31 16:38:51 by jramondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void ) {
	this->total_contacts = 0;
	this->contact_indexer = 0;
	
	std::cout << "Welcome!" << std::endl;

	while (PhoneBook::run())
		continue ;	
	return ;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "All your contacts will be lost." << std::endl;
	std::cout << "Goodbye!" << std::endl;
}

bool PhoneBook::run( void ) {
	std::string cmd;
	

	cmd.clear();
	std::getline(std::cin, cmd);
	if (cmd.empty())
			return (true);
	if (cmd == "ADD")
		PhoneBook::addNewContact();
	else if (cmd == "SEARCH")
		PhoneBook::searchContacts();
	else if (cmd == "EXIT")
		return (false);
	else
		std::cerr << "You can only type ADD, SEARCH or EXIT!" << std::endl;
	return (true);
}

void	PhoneBook::addNewContact() {
	int id = this->contact_indexer;
	this->contacts[id].setFirstName();
	this->contacts[id].setLastName();
	this->contacts[id].setNickName();
	this->contacts[id].setPhoneNumber();
	this->contacts[id].setDarkestSecret();

	std::cout << "Contact Saved!" << std::endl;
	if (this->contact_indexer == 7)
		this->contact_indexer = 0;
	else
		this->contact_indexer++;
	if (this->total_contacts < 8)
		this->total_contacts ++;
}

void	PhoneBook::searchContacts( void ) {
		int i = 0;
		int j;

		if (this->total_contacts == 0)
			std::cout << "You don't have any contacts in your phonebook." << std::endl;
		while (i < this->total_contacts)
		{
			std::cout << std::setw(10) << std::right;
			std::cout << i + 1 << " | ";
			print_column(this->contacts[i].getFirstName());
			print_column(this->contacts[i].getLastName());
			print_column(this->contacts[i].getNickname());
			std::cout << std::endl;
			i++;
		}
		std::cout << "Type the index number of the contact to see all its data." << std::endl;
		std::cin >> j;
		while (1)
		{
			if(std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(__INT_MAX__,'\n');
				printError("Input is not a valid integer.");
				std::cin >> j;
			}
			if (j < 1 || j > 8 || j > this->total_contacts)
				return (printError("That is not a valid contact index. Type ADD, SEARCH or EXIT."));
			if (!std::cin.fail())
			{
				std::cout << "First name: " << this->contacts[j - 1].getFirstName() << std::endl;
				std::cout << "Last name: " << this->contacts[j - 1].getLastName() << std::endl;
				std::cout << "Nickname: " << this->contacts[j - 1].getNickname() << std::endl;
				std::cout << "Phone Number: " << this->contacts[j - 1].getPhoneNumber() << std::endl;
				std::cout << "Darkest Secret: " << this->contacts[j - 1].getDarkestSecret() << std::endl;
				break ;
			}
		}
}

void PhoneBook::print_column(std::string str) {
	std::cout << std::setw(10) << std::right;
	if (str.size() > 9)
		std::cout << str.substr(0, 9) + (std::string)"." << " | ";
	else
		std::cout << str << " | ";
}

void	PhoneBook::printError( std::string str ) {
		std::cerr << "Error: " << str << std::endl;
}
