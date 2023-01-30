/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:28:51 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:07:37 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		ShrubberyCreationForm home("home");
		Bureaucrat baladyia("Mr Salah", 137);
		Bureaucrat finance("Madam Mona", 140);
		home.beSigned(finance);
		home.exec_shrub(baladyia);
		PresidentialPardonForm pardon("Excess speed limit");
		Bureaucrat  ultra_prime_minister_pro_max("John opaaaa", 5);
		Bureaucrat royal_ceramic("contessa enflippssteenovech", 25);
		pardon.beSigned(royal_ceramic);
		pardon.exec_pres(ultra_prime_minister_pro_max);
		RobotomyRequestForm coffe_machine("Nespresso");
		Bureaucrat health_specialist("Dr Sayed", 45);
		Bureaucrat admin("Madam Hanaa", 72);
		coffe_machine.beSigned(admin);
		coffe_machine.exec_robo(health_specialist);
		// std::cout << hr << std::endl;
		// // hr.demote();
		// hr.demote();
		
	}
	catch(AForm::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	// delete finance;
	return (0);
}