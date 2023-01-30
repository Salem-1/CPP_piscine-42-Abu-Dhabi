/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:15:57 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:08:51 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("Empty form"), sign_grade(150), exec_grade(150), is_signed(false)
{
	std::cout << "📜AForm Constructor called" << std::endl;
	
	
}

AForm::~AForm()
{
	std::cout << "📜AForm Destructor called" << std::endl;

};

AForm::AForm(std::string given_name, short grade_sign, short grade_exec) : name(given_name),
			sign_grade(grade_sign), exec_grade(grade_exec)
{
	std::cout << "📜AForm Constructor called" << std::endl;
	if (grade_sign > 150 || grade_exec > 150)
		throw (AForm::GradeTooHighException());
	else if (grade_sign < 1 || grade_exec < 1)
		throw (AForm::GradeTooLowException());
	is_signed = false;
};

AForm::AForm(AForm const &obj2) : name(obj2.getName()),
	sign_grade(obj2.getSignGrade()), exec_grade(obj2.getExecGrade())
{
	std::cout << "📜AForm copy Constructor called" << std::endl;
	if (obj2.getSignGrade() > 150 || obj2.getExecGrade() > 150)
		throw (AForm::GradeTooHighException());
	else if (obj2.getSignGrade() < 1 || obj2.getExecGrade() < 1)
		throw (AForm::GradeTooLowException());
	is_signed = obj2.getSignStatus();
};
AForm &AForm::operator= (AForm const &obj2)
{
	std::cout << "📜AForm copy assignment operator called" << std::endl;
	if (this != &obj2)
		is_signed = obj2.getSignStatus();
	return (*this);
};

std::string	AForm::getName() const
{
	return (name);
}

short	AForm::getSignGrade() const
{
	return (sign_grade);
}
short	AForm::getExecGrade() const
{
	return (exec_grade);
}
bool	AForm::getSignStatus() const
{
	return (is_signed);
}

std::ostream& operator<< (std::ostream& out, AForm const &Aform)
{
	std::string	is_signed;
	if (Aform.getSignStatus())
		is_signed = "Signed";
	else
		is_signed = "Not signed";
	out << Aform.getName() << ", can be signed by " << Aform.getSignGrade()
	<< ", executed by " << Aform.getExecGrade() << ", and  status is "
	<< is_signed;
	return (out);
}

void	AForm::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() > sign_grade)
		throw (AForm::GradeTooLowException());
	else
		is_signed = true;
}

int	AForm::execute(Bureaucrat const & executor) const
{
	if (!is_signed)
	{
		std::cout <<  "📜 Cannot execute " << this->getName() << " please get signature first" << std::endl;
		return (1);
	}
	executor.executeForm(*this);
	if (executor.getGrade() > exec_grade)
		throw (AForm::GradeTooLowException());
	return (0);
}

void	AForm::exec_robo(Bureaucrat const & executor) const
{
	(void)executor;
};

void	AForm::exec_shrub(Bureaucrat const & executor) const
{
	(void)executor;
};

void	AForm::exec_pres(Bureaucrat const & executor) const
{
	(void)executor;
};
