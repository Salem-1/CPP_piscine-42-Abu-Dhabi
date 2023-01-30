/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:13:55 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/25 14:06:11 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>


class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string given_name, short given_grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &obj2);
		Bureaucrat	&operator= (Bureaucrat const &obj2);
		std::string	getName() const;
		short		getGrade() const;
		void		promote();
		void		demote();
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
		short				grade;
};
std::ostream& operator<< (std::ostream& out, Bureaucrat const &bero);
#endif

//make exceptions catchable, 
//overload the << 