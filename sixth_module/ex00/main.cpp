/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:28:51 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 08:04:56 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat hrr;
	try
	{
		Bureaucrat finance("Mr Mohamed", 140);
		Bureaucrat hr("Miss Dalia", 3);
		std::cout << hr << std::endl;

		hr.promote();
		hr.promote();
		// hr.promote();

		
		std::cout << finance << std::endl;
		finance.demote();
		finance.demote();
		finance.demote();
		finance.demote();
		std::cout << finance << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	// delete finance;
	return (0);
}