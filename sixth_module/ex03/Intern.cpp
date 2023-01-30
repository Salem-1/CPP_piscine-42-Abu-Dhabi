/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:10:52 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:19:41 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Constructor called" << std::endl;
	forms[0] = "shrubbery request";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
};

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
};

Intern::Intern(Intern const &obj2)
{
	std::cout << "Intern Copy constructor structor called" << std::endl;
	for (int i = 0; i < 3; i++)
		forms[i] = obj2.getForms(i);
};

Intern &Intern::operator= (Intern const &obj2)
{
	if (this != &obj2)
	{
		for (int i = 0; i < 3; i++)
			forms[i] = obj2.getForms(i);
	}
	return (*this);
};
AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
	AForm *tmp;
	tmp = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == forms[i])
		{
			switch (i)
			{
				case 0:
				{
					tmp = new ShrubberyCreationForm(form_target);
					break ;
				}
				case 1:
				{
					tmp = new RobotomyRequestForm(form_target);
					break ;
				}
				case 2:
				{
					tmp = new PresidentialPardonForm(form_target);
					break ;
				}
				break ;
			}
			break ;
		}
	}
	if (!tmp)
		throw(Intern::FormCreationgException());
	return (tmp);
}

std::string 	Intern::getForms(int index) const
{
	return (forms[index]);
}