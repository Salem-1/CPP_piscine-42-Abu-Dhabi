/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 05:39:06 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 09:26:05 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

// int	Sed::do_sed(void)


int	Sed::do_sed(void)
{
	if (Sed::bad_file)
		return (1);
	std::ofstream fd2(Sed::f2_name,std::ios::out);
	if (!fd2.is_open())
		return (1);
	for (int i = 0; i < Sed::len_f1; i++)
	{
		Sed::next_s1 = f1_content.find(Sed::s1, i);
		std::cout << "location of next " << Sed::s1 
		<< " is " << Sed::next_s1 << " i = " << i <<std::endl;
		if (Sed::next_s1 == -1)
		{
			fd2  << &f1_content[i];
			break ;
		}
		fd2.write((&f1_content[i]), Sed::next_s1 - i);
		fd2.write(Sed::s2.c_str(), Sed::len_s2);
		i= Sed::len_s1 + Sed::next_s1 - 1;
	}
	fd2.close();
	return (0);
}

void	Sed::set_f2name(std::string filename)
{
	if (Sed::bad_file)
		return ;
	Sed::f2_name = filename;
	Sed::f2_name.append(".replace");
}
void	Sed::set_f1content(std::string filename)
{
	std::ifstream fd(filename, std::ios::out);
	if (!fd.is_open())
	{
		Sed::bad_file = 1;
		return ;
	}
	Sed::buffer << fd.rdbuf();
	Sed::f1_content = Sed::buffer.str();
	fd.close();
}


void	Sed::test(void)
{
	// for (int i = 0; i < Sed::len_f1; i++)
	// 	std::cout << Sed::f1_content[i];
	// std::cout << Sed::f2_name << std::endl;
}