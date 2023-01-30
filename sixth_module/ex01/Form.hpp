/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:15:23 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/25 16:01:04 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
		Form();
		Form(std::string given_name, short sign_grade, short exec_grade);
		~Form();
		Form(Form const &obj2);
		Form &operator= (Form const &obj2);
		std::string	getName() const;
		short		getSignGrade() const;
		short		getExecGrade() const;
		bool		getSignStatus() const;
		void		beSigned(Bureaucrat signer);
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
std::ostream& operator<< (std::ostream& out, Form const &form);

#endif