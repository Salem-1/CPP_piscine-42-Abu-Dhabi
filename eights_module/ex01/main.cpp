/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:05:08 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 19:11:07 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Portable.hpp"
int main(void)
{

	int	arr[10] =  {1, 2 ,3, 4, 5, 6, 7, 8, 9, 10};

	iter<int>(arr, 10, print_arr);
	iter<int>(arr, 10, add_one);
	std::cout << "\n" << std::endl;
	iter<int>(arr, 10, print_arr);
	std::cout << "\n" << std::endl;
	iter<int>(arr, 10, by_two);
	iter<int>(arr, 10, print_arr);
	
	float farr[10] =  {1.2, 2.2 ,3.2, 4.1, 5, 6, 7, 8, 9, 10};
	iter<float>(farr, 10, print_arr);
	iter<float>(farr, 10, add_one);
	std::cout << "\n" << std::endl;
	iter<float>(farr, 10, print_arr);
	std::cout << "\n" << std::endl;
	iter<float>(farr, 10, by_two);
	iter<float>(farr, 10, print_arr);
	return 0;
}

