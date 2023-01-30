/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:32:38 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:09:29 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("anonymous"), grade(150)
{
	std::cout << "🧐Bureaucrat default Constructor called" << std::endl;

}
Bureaucrat::Bureaucrat(std::string given_name, short given_grade) : name(given_name)
{
	std::cout << "🧐Bureaucrat Constructor taking name and grade called" << std::endl;
	if (given_grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	else if (given_grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = given_grade;
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "🧐Bureaucrat Destructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &obj2) : name (obj2.getName())
{
	std::cout << "🧐Bureaucrat copy Destructor called" << std::endl;
	this->grade = obj2.getGrade();
};

Bureaucrat	&Bureaucrat::operator= (Bureaucrat const &obj2)
{
	if (this != &obj2)
	{
		this->grade = obj2.getGrade();
	}
	return (*this);
};

std::string	 Bureaucrat::getName() const
{
	return (name);
}

short	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::demote()
{
	if (grade + 1 > 150)
		throw (Bureaucrat::GradeTooHighException());
	else
	{
		grade += 1;
		std::cout << "🙁🙁 " << name << " got demoted to " << grade << std::endl;
	}
}
void	Bureaucrat::promote()
{
	
	if (grade - 1 < 1)
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		grade -= 1;
		std::cout << "🎉🎉 " << name << " got promoted to " << grade << std::endl;
	}
}

std::ostream& operator<< (std::ostream& out, Bureaucrat const &bero)
{
	out << bero.getName() << ", bureaucrat  grade "
	 <<  bero.getGrade() << ".";
	return (out);
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(AForm::GradeTooLowException& e)
	{
		std::cout << name << " Couldn't signed " << form.getName()
		<< " because his grade is " << grade << " and you nedd grade " << form.getSignGrade() << " or above to sign the form" <<std::endl;

	}
}

int	Bureaucrat::executeForm(AForm const & Aform) const
{
	if (grade <= Aform.getSignGrade())
	{
		std::cout << name << " Executed " << Aform.getName() << std::endl;
		return (0);
	}
	else
		std::cout << "Error: " << name << " couldn't Execute " << Aform.getName() << std::endl;
	return (1);
};