/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_setters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:34:18 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 20:35:56 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::set_first_name(void)
{
	std::string	user_input;

	std::cout << "Frist Name: ";
	getline(std::cin, user_input);
	if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
	if (user_input.length() == 0)
	{
		Contact::empty_field_message();
		this->set_first_name();
	}
	else if (user_input.length() > 35)
	{
		err_name();
		this->first_name = user_input.std::string::substr(0, 35);
	}
	else
		this->first_name = user_input;
}

void	Contact::set_last_name(void)
{
	std::string	user_input;

	std::cout << "Last name: ";
	getline(std::cin, user_input);
	if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
	if (user_input.length() == 0)
	{
		Contact::empty_field_message();
		this->set_last_name();
	}
	else if (user_input.length() > 35)
	{
		err_name();
		this->last_name = user_input.std::string::substr(0, 35);
	}
	else
		this->last_name = user_input;
}

void	Contact::set_nickname(void)
{
	std::string	user_input;

	std::cout << "nickname: ";
	getline(std::cin, user_input);
	if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
	if (user_input.length() == 0)
	{
		Contact::empty_field_message();
		this->set_nickname();
	}
	else if (user_input.length() > 35)
	{
		err_name();
		this->nickname = user_input.std::string::substr(0, 35);
	}
	else
		this->nickname = user_input; 
}