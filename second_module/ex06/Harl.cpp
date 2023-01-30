/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:00:13 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 11:19:24 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!"
	<< std::endl;
}
void	Harl::info(void) const
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn't";
	std::cout << "put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << std::endl;
}
void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}
void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::display_error(void)
{
	for (int i = 0; i < 4; i ++)
	{
		if (Harl::complains[i] == Harl::level)
		{
			switch (i)
			{
			case 0:
				(this->*print_error[0])();
			case 1:
				(this->*print_error[1])();
			case 2:
				(this->*print_error[2])();
			case 3:
				(this->*print_error[3])();
				break;
			
			default:
				break;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}