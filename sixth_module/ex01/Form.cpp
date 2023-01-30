/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:15:57 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/25 15:29:26 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
	std::cout << "📜Form Destructor called" << std::endl;

};

Form::Form(std::string given_name, short grade_sign, short grade_exec) : name(given_name),
			sign_grade(grade_sign), exec_grade(grade_exec)
{
	std::cout << "📜Form Constructor called" << std::endl;
	if (grade_sign > 150 || grade_exec > 150)
		throw (Form::GradeTooHighException());
	else if (grade_sign < 1 || grade_exec < 1)
		throw (Form::GradeTooLowException());
	is_signed = false;
};

Form::Form(Form const &obj2) : name(obj2.getName()),
	sign_grade(obj2.getSignGrade()), exec_grade(obj2.getExecGrade())
{
	std::cout << "📜Form copy Constructor called" << std::endl;
	if (obj2.getSignGrade() > 150 || obj2.getExecGrade() > 150)
		throw (Form::GradeTooHighException());
	else if (obj2.getSignGrade() < 1 || obj2.getExecGrade() < 1)
		throw (Form::GradeTooLowException());
	is_signed = obj2.getSignStatus();
};
Form &Form::operator= (Form const &obj2)
{
	std::cout << "📜Form copy assignment operator called" << std::endl;
	if (this != &obj2)
		is_signed = obj2.getSignStatus();
	return (*this);
};

std::string	Form::getName() const
{
	return (name);
}

short	Form::getSignGrade() const
{
	return (sign_grade);
}
short	Form::getExecGrade() const
{
	return (exec_grade);
}
bool	Form::getSignStatus() const
{
	return (is_signed);
}

std::ostream& operator<< (std::ostream& out, Form const &form)
{
	std::string	is_signed;
	if (form.getSignStatus())
		is_signed = "Signed";
	else
		is_signed = "Not signed";
	out << form.getName() << ", can be signed by " << form.getSignGrade()
	<< ", executed by " << form.getExecGrade() << ", and  status is "
	<< is_signed;
	return (out);
}

void	Form::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() > sign_grade)
		throw (Form::GradeTooLowException());
	else
		is_signed = true;
}