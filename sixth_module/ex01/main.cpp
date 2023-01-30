/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:28:51 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 08:13:08 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat hr("Miss Dalia", 40);
		std::cout << hr << std::endl;
		hr.promote();
		Form resignation("Estemara 6", 15, 3);
		std::cout << resignation << std::endl;
		hr.signForm(resignation);
		std::cout << resignation << std::endl;
		std::cout << std::endl;
		Bureaucrat dean("Dr Mahmoud", 15);
		std::cout << dean << std::endl;
		dean.promote();
		Form graduation("Pharmacy graduation certificate", 25, 18);
		std::cout << graduation << std::endl;
		dean.signForm(graduation);
		std::cout << graduation << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}