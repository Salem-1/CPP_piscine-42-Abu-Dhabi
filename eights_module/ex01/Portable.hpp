/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Portable.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:37:12 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 19:08:31 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PORTABLE_HPP
# define PORTABLE_HPP
# include <iostream>


template <typename T>
void	iter(T arr[], int len, void(*f)(T &a))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void	print_arr(T&a)
{
	std::cout << "arr element is " << a << std::endl;
}

template <typename T>
void	add_one(T&a)
{
	++a;
}

template <typename T>
void	by_two(T&a)
{
	a *= 2;
}
#endif

