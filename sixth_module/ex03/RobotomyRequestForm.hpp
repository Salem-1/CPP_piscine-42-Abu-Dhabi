/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:44 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:02:02 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM
#include "ShrubberyCreationForm.hpp"
#include <ctime>
class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string input_target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &obj2);
		RobotomyRequestForm	&operator= (RobotomyRequestForm const &pbj2);
		std::string	getTarget() const;
	void		exec_robo(Bureaucrat const & executor) const;
	private:
		std::string	target;
};

#endif
// Makes some drilling noises. Then,
// informs that <target> has been robotomized successfully 50% of the time. 
// Otherwise, informs that the robotomy failed.