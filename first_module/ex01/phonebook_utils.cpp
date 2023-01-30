/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:39:01 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 22:27:06 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::search_contacts(void)
{
	int	index;

	this->display_contacts();
	index = get_index_from_user();
	if (index == -1)
		return ;
	this->display_contact_from_phonebook(index);
}


int	PhoneBook::get_index_from_user()
{
	int	get_input;
	int	i;

	i = 1;

	std::cout << "Please enter contact index:" << std::endl;
	std::cin >> get_input;
	std::cin.clear();
	if (std::cin.fail())
		std::cin.clear();
	else if (get_input > 0 && get_input < 9
				&& get_input < this->contact_counter + 1)
		return (get_input) ;
	std::cout << "\nSorry invalid input\n\n";
	return (-1);
}

void	PhoneBook::display_contacts(void)
{
	std::cout << "Index     |First name|Last name | Nickname |" << std::endl;
	for (int i = 0; i < 8; i++)
		display_short_contact(i);
}

void		PhoneBook::display_short_contact(int	i)
{
	std::cout << i + 1;
	for (int i = 0 ; i < 9; i++)
		std::cout << " ";
	std::cout << "|";
	format_searched_fields(this->contacts[i].get_first_name());
	format_searched_fields(this->contacts[i].get_last_name());
	format_searched_fields(this->contacts[i].get_nickname());
	std::cout << std::endl;
}

void	PhoneBook::format_searched_fields(std::string name)
{
	std::string	formatted_name;
	int			len;
	int			spaces;

	spaces = 0;
	len = name.length();
	if (len == 10)
		std::cout << name <<  "|";
	else if (len > 10)
	{
		formatted_name = name.std::string::substr(0, 9);
		std::cout << formatted_name <<  ".|";
	}
	else
	{
		spaces = 10 - len;
		std::cout << name ;
		for (int i = 0 ; i < spaces; i++)
			std::cout << " ";
		std::cout << "|";
	}
}

void	PhoneBook::display_contact_from_phonebook(int	index)
{
	std::cout << "\n\nContact " << index << " details :"<< std::endl;
	std::cout << "First name: " << this->contacts[index - 1].get_first_name()
		<< std::endl;
	std::cout << "Last name: " << this->contacts[index - 1].get_last_name()
		<< std::endl;
	std::cout << "Nickname: " << this->contacts[index - 1].get_nickname()
		<< std::endl;
	std::cout << "Darkest secret: " << this->contacts[index - 1].get_darkest_secret()
		<< std::endl;
	std::cout << "Phone: " << this->contacts[index - 1].get_phone()
		<< std::endl;
	std::cout << std::endl;
}
