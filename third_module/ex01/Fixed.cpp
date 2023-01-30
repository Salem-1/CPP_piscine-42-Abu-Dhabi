/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:20 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 14:43:14 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	Fixed::fixed_point_value = 0;
}

Fixed::Fixed(const int int_input)
{
	std::cout << "Int Constructor called input = " << std::endl;
	this->fixed_point_value = (int_input << this->n_fraction_bits);
}

Fixed::Fixed(const float float_input)
{
	std::cout << "Float Constructor called" << std::endl;
	this->fixed_point_value = (int)round( float_input * 256);
}

Fixed &Fixed::operator = (const Fixed &new_fixed)
{
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &new_fixed)
		this->fixed_point_value = new_fixed.getRawBits();
	return (*this);
};

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

std::ostream& operator << (std::ostream& out, Fixed const &f)
{
	out << f.toFloat();
	 return out;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<  std::endl;
	return (this->fixed_point_value);
};

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" <<  std::endl;
	this->fixed_point_value = raw;
};

//converts the fixed-point value to a floating-point value.
float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point_value / 256.0);
};
//that converts the fixed-point value to an integer value
int Fixed::toInt( void ) const
{
	return  (this->fixed_point_value 
			>> this->n_fraction_bits);
}