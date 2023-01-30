/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:45:56 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:02:17 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string input);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj2);
		ShrubberyCreationForm &operator= (ShrubberyCreationForm const &obj2);
		std::string	getTarget() const;
		void		exec_shrub(Bureaucrat const & executor) const;
	private:
		std::string	target;
};
#endif