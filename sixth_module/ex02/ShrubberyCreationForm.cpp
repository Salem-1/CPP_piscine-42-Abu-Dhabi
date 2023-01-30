/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:59:02 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:02:11 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
	std::cout << "🌴 ShrubberyCreationForm Constructor called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "🌴 ShrubberyCreationForm Destructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string input): AForm("shrubbery", 145, 137), target(input)
{
	std::cout << "🌴 ShrubberyCreationForm Constructor that takes target called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj2) : AForm("shrubbery", 145, 137), target(obj2.getTarget())
{
	
};

ShrubberyCreationForm &ShrubberyCreationForm::operator= (ShrubberyCreationForm const &obj2)
{
	if (this != &obj2)
	{
		this->target = obj2.getTarget();
	}
	return (*this);
};


void	ShrubberyCreationForm::exec_shrub(Bureaucrat const & executor) const
{
	if (!this->getSignStatus())
	{
		std::cout << "🛂 Cannot execute: Please get the ShrubberyCreationForm signed first" << std::endl;
		return ;
	}
	if (execute(executor))
		return ;
	
	std::cout << "🌴 executing ShrubberyCreationForm " << std::endl;
	std::string	filename;
	filename = target + "_shrubbery";
	std::ofstream file(filename);
	std::string	tree = "          &&& &&  & &&\n      && &--&-|& ()|- @, &&\n      &--(-&-&||-& -_-)_&-_&\n   &() &--&|()|-&-- '% & ()\n  &_-_&&_- |& |&&-&__%_-_& &&\n&&   && & &| &| -& & % ()& -&&\n ()&_---()&-&-|&&-&&--%---()~\n     &&     -|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n";
	if (file.is_open())
	{
		file << tree;
		file.close();
	}
	else
	{
		std::cout << "Error: file opening error!" << std::endl;
	}
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (target);
}