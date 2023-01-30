/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:10:26 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:01:56 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45)
{
	std::cout << "🤖 RobotomyRequestForm Constructor called" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "🤖 RobotomyRequestForm Destructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string input): AForm("RobotomyRequestForm", 72, 45), target(input)
{
	std::cout << "🤖 RobotomyRequestForm Constructor that takes target called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj2) : AForm("RobotomyRequestForm", 72, 45), target(obj2.getTarget())
{
	
};

RobotomyRequestForm &RobotomyRequestForm::operator= (RobotomyRequestForm const &obj2)
{
	if (this != &obj2)
	{
		this->target = obj2.getTarget();
	}
	return (*this);
};


void	RobotomyRequestForm::exec_robo(Bureaucrat const & executor) const
{
	if (execute(executor))
		return ;
	time_t current_time = time(0);
	int r = static_cast<int>(current_time) % 10;

	if (r < 5)
	{
		system("say drdrdrdrdrdrididididddddddddddddddddddddddddddddddddddddddd");
		std::cout << target << " have been robotomized" << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}