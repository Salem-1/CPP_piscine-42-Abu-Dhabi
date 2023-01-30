/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:48:08 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/15 15:25:32 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

const std::string Contact::get_first_name(void)
{
	std::cout << "\ngetting first name" << this->first_name << std::endl;
	return (this->first_name);
}