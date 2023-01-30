/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:23:35 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/12 15:23:35 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_upper_one_arg(std::string arg);

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		print_upper_one_arg(argv[i]);
	std::cout << std::endl;
}

void	print_upper_one_arg(std::string arg)
{
	int	i;

	i = 0;
	while (arg[i])
		std::cout << (char)std::toupper(arg[i++]);
}