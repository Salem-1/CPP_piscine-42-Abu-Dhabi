/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:37:12 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/30 07:17:22 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	public:
		Array() : len (0);
		{
			arr = new T;
		}
		Array(unsigned int n): len(n)
		{
			arr = new T[n];
		}
		~Array(){
			delete arr;
		}
		Array &operator= (Array const &obj2)
		{
			if (this != &obj2)
			{
				for (int i = 0; i < obj2.size(); i++ )
					arr[i] = obj2.arr[i];
			}
			return (*this);
		}
		Arra(Array const &obj2)
		{
			*this = obj2;
		}
		unsigned int	size() const
		{
			return (len);
		}
		T				*arr;
	private:
		unsigned int	len;
};
#endif

