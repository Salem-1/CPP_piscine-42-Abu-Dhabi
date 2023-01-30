/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:52:55 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:01:43 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "RobotomyRequestForm.hpp"
class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string input_target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &obj2);
		PresidentialPardonForm	&operator= (PresidentialPardonForm const &pbj2);
		std::string	getTarget() const;
		void	exec_pres(Bureaucrat const & executor) const;
	private:
		std::string	target;
};

#endif

