/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:01:53 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 10:58:18 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl
{
	public:
		Harl(std::string input)
		{
			level = input;
			complains[0] = "DEBUG";
			complains[1] = "INFO";
			complains[2] = "WARNING";
			complains[3] = "ERROR";
			print_error[0] = &Harl::debug;
			print_error[1] = &Harl::info;
			print_error[2] = &Harl::warning;
			print_error[3] = &Harl::error;
		};
		~Harl(){};
		void	debug (void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
		void	display_error(void);
		void	(Harl::*print_error[4])() const;
	private:
		std::string	level;
		std::string	complains[4];
			
};
#endif