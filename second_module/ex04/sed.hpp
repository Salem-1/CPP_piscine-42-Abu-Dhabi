/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:33:18 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 10:02:09 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>

class	Sed
{
	public:
		Sed(){};
		Sed(std::string filename, std::string string1, std::string string2)
		{
			s1 = string1;
			len_s1 = s1.length();
			s2 = string2;
			len_s2 = s2.length();
			bad_file = 0;
			next_s1 = 0;
			set_f1content(filename);
			len_f1 =  f1_content.length();
			set_f2name(filename);
			test();
		};
		~Sed()
		{
			std::cout << "nSed resources destroyed" << std::endl;
		}
		int	do_sed(void);
	private:
		void				set_f2name(std::string filename);
		void				set_f1content(std::string filename);
		void				test(void);
		std::ostringstream	buffer;
		std::string			f1_content;
		std::string			s1;
		std::string			s2;
		std::string			f2_name;
		int					len_f1;
		int					len_s1;
		int					len_s2;
		int					bad_file;
		int					next_s1;
};
#endif