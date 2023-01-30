/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:48:08 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 20:29:17 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

const std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

const std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

const std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

const std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
const std::string Contact::get_phone(void)
{
	return (this->phone);
}