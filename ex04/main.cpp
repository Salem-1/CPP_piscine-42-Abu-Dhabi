/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:29:23 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 07:26:47 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of argumnets" << std::endl;
		return (1);
	}
	Sed s(argv[1], argv[2], argv[3]);
	s.do_sed();
	return (0);
}

/*
Create a program that takes three parameters in the following order: 
a filename and two strings, s1 and s2.
open the file <filename>
copies its content into a new file <filename>.
replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. 
All the member functions of the class std::string are allowed, 
except replace. Use them wisely!
Of course, handle unexpected inputs and errors. 
You have to create and turn in your own tests to ensure your program works as expected.
*/
	// std::ifstream fd(argv[1], std::ios::in);
	// std::string out_file = argv[1];
	// out_file.append( ".replace");
	// std::ofstream fd2(out_file, std::ios::out );
	// if (!fd.is_open())
	// 	return (0);
	// while(fd.get(c))
	// 	fd2<< c ;
	// fd.close();
	// fd2.close();
	// (void)argv;