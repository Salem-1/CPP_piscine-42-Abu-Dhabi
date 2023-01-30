/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:10:35 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:05:47 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidentail pardon", 25, 5)
{
	std::cout << "🎎 PresidentialPardonForm Constructor called" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "🎎 PresidentialPardonForm Destructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string input): AForm("Presidentail pardon", 25, 5), target(input)
{
	std::cout << "🎎 PresidentialPardonForm Constructor that takes target called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj2) : AForm("PresidentialPardonForm", 72, 45), target(obj2.getTarget())
{
	
};

PresidentialPardonForm &PresidentialPardonForm::operator= (PresidentialPardonForm const &obj2)
{
	if (this != &obj2)
	{
		this->target = obj2.getTarget();
	}
	return (*this);
};


void	PresidentialPardonForm::exec_pres(Bureaucrat const & executor) const
{
	if (execute(executor))
		return ;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}
