/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:52:20 by ahsalem           #+#    #+#             */
/*   Updated: 2023/01/22 14:45:47 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	Fixed::fixed_point_value = 0;
}

Fixed::Fixed(const int int_input)
{
	this->fixed_point_value = (int_input << this->n_fraction_bits);
}

Fixed::Fixed(const float float_input)
{
	this->fixed_point_value = (int)round( float_input * 256);
}

Fixed &Fixed::operator = (const Fixed &new_fixed)
{
	if (this != &new_fixed)
		this->fixed_point_value = new_fixed.getRawBits();
	return (*this);
};

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
};

Fixed::~Fixed()
{};

std::ostream& operator << (std::ostream& out, Fixed const &f)
{
	out << f.toFloat();
	 return out;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point_value);
};

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
};


float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point_value / 256.0);
};

int Fixed::toInt( void ) const
{
	return  (this->fixed_point_value 
			>> this->n_fraction_bits);
}

Fixed	&Fixed::min(Fixed &point1, Fixed &point2)
{
	if (point1 < point2)
		return (point1);
	else
		return (point2);
}

Fixed &Fixed::max(Fixed &point1, Fixed &point2)
{
	if (point1 > point2)
		return (point1);
	else
		return (point2);
}

const Fixed 	&Fixed::min(const Fixed &point1, const Fixed &point2)
{
	if (point1 < point2)
		return (point1);
	else
		return (point2);
}

const Fixed	&Fixed::max(const Fixed  &point1, const Fixed  &point2)
{
	if (point1 > point2)
		return (point1);
	else
		return (point2);
}

bool Fixed::operator> (Fixed  const &obj2) const
{
	return (this->toFloat() > obj2.toFloat());
}

bool Fixed::operator< (Fixed  const &obj2) const
{
	return (this->toFloat() < obj2.toFloat());
}
bool Fixed::operator> (Fixed  const &obj2) 
{
	return (this->toFloat() > obj2.toFloat());
}

bool Fixed::operator< (Fixed  const &obj2) 
{
	return (this->toFloat() < obj2.toFloat());
}

bool Fixed::operator>= (Fixed const &obj2)
{
	return (this->toFloat() >= obj2.toFloat());
}

bool Fixed::operator<= (Fixed const &obj2)
{
	return (this->toFloat() <= obj2.toFloat());
}

bool Fixed::operator== (Fixed const &obj2)
{
	return (this->toFloat() == obj2.toFloat());
}

bool Fixed::operator!= (Fixed const &obj2)
{
	return (this->toFloat() != obj2.toFloat());
}

Fixed	Fixed::operator++ ()
{
	this->fixed_point_value++;
	return (*this);
}

Fixed	Fixed::operator-- ()
{
	this->fixed_point_value--;
	return (*this);
}
Fixed	Fixed::operator++ (int)
{
	Fixed tmp(*this);

	this->fixed_point_value++;
	return(tmp);
}

Fixed	Fixed::operator-- (int)
{
	Fixed tmp(*this);

	this->fixed_point_value--;
	return(tmp);
}

Fixed const Fixed::operator+ (Fixed const &obj2)
{
	return (Fixed(this->toFloat() + obj2.toFloat()));
}

Fixed const Fixed::operator- (Fixed const &obj2)
{
	return (Fixed(this->toFloat() - obj2.toFloat()));
}


Fixed const Fixed::operator/ (Fixed const &obj2)
{
	return (Fixed(this->toFloat() / obj2.toFloat()));
}

Fixed const Fixed::operator* (Fixed const &obj2)
{
	return (Fixed(this->toFloat() * obj2.toFloat()));
}
