/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:15:23 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/27 10:00:18 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	public:
		AForm();
		AForm(std::string given_name, short sign_grade, short exec_grade);
		virtual ~AForm();
		AForm(AForm const &obj2);
		AForm &operator= (AForm const &obj2);
		std::string	getName() const;
		short			getSignGrade() const;
		short			getExecGrade() const;
		bool			getSignStatus() const;
		void			beSigned(Bureaucrat signer);
		int				execute(Bureaucrat const & executor) const;
		virtual void	exec_robo(Bureaucrat const & executor) const;
		virtual void	exec_shrub(Bureaucrat const & executor) const;
		virtual void	exec_pres(Bureaucrat const & executor) const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Grade is too high.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Grade is too low.");
				}
		};
	private:
		std::string const	name;
		short const			sign_grade;
		short const			exec_grade;
		bool				is_signed; //construct with false
};
std::ostream& operator<< (std::ostream& out, AForm const &Aform);

#endif