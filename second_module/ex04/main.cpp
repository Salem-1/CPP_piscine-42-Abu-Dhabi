/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:29:23 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/17 10:00:21 by ahsalem          ###   ########.fr       */
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
