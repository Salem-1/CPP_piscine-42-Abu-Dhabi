/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:32:17 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 22:32:41 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

void	PhoneBook::start()
{
	std::string	response;

	contact_counter = 0;
	while(1)
	{
		welcome_message();
		getline(std::cin, response);
		if (std::cin.fail())
			handle_malicious_input();
		std::cin.clear();
		if(handle_response(response))
			return;
	}
}

int	PhoneBook::handle_response(
			std::string response)
{
	if (response.length() > 8)
		return (0);
	if(!response.compare("EXIT"))
		return (1);
	else if(!response.compare("ADD"))
		add_contact();
	else if(!response.compare("SEARCH"))
		search_contacts();
	else
		std::cout << "\nPlease enter a valid command\n" << std::endl;
	std::cout << std::endl;
	return (0);
}


void	PhoneBook::add_contact()
{
	if (contact_counter < 8)
	{
		fill_contact_details(contacts[contact_counter]);
	}
	else
		fill_contact_details(contacts[contact_counter % 8]);
	contact_counter += 1;
	std::cout << "Contact added\n" << std::endl;
	
}

void	PhoneBook::welcome_message()
{
	std::cout << "Welcome to the awesome phonebook!" << std::endl;
	std::cout << "How can I help you? " << std::endl;
	std::cout << "\nTo add contact type        : ADD" << std::endl;
	std::cout << "To search for contact type : SEARCH" << std::endl;
	std::cout << "To exit the program type   : EXIT" << std::endl;
	std::cout << "\n$> ";
}

void	PhoneBook::fill_contact_details(Contact &single_contact)
{
	single_contact.set_first_name();
	single_contact.set_last_name();
	single_contact.set_nickname();
	single_contact.set_darkest_secret();
	single_contact.set_phone();
}