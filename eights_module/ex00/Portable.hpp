/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portable.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:37:12 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/29 16:21:19 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PORTABLE_HPP
# define PORTABLE_HPP
# include <iostream>


template <typename T>
class Portable
{
	public:
		Portable();
		~Portable();
		Portable(Portable const &obj2);
		Portable &operator= (Portable const &obj2);
		static void	swap(T &a, T &b);
		static T	min(T a, T b);
		static  T	max(T a, T b);
};
template <typename T>
Portable<T>::Portable()
{
	
};
template <typename T>
Portable<T>::~Portable()
{
	
};
template <typename T>
Portable<T>::Portable(Portable const &obj2)
{
	(void)obj2;
};

template <typename T>
Portable <T> &Portable<T>::operator= (Portable const &obj2)
{
	(void)obj2;
	return (*this);
};
template <typename T>
void	Portable<T>::swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	Portable<T>::min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	Portable<T>::max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
#endif