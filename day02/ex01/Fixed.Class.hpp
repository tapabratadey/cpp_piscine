/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:03:38 by tadey             #+#    #+#             */
/*   Updated: 2018/06/28 16:03:40 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_CLASS_HPP_
#define FIXED_CLASS_HPP_
#include <iostream>
#include <cmath>

#if 0
    -each class must be in canonical form
    -one default constructor
    -destructor
    -a copy constructor
    -an assignation operator overload
#endif

class Fixed
{
        int                 fixedPointValue;
        static const int    fractionalBits;
    public:
        Fixed();//default constructor inits fpv to 0
        ~Fixed();//destructor
        Fixed(const Fixed &);//copy constructor
        Fixed(const int);//constructor takes in integer
        Fixed(const float);//constructor takes in float
        Fixed &operator=(const Fixed &);//operator overload
        int getRawBits() const;//returns raw value of fpv
        void setRawBits(int const);//sets the raw value of fpv
        float toFloat() const;//toFloat func converts the fixed point value to floating point value
        int toInt() const;//toInt func converts the fixed point value to integer value
};

std::ostream &operator<<(std::ostream &out, Fixed const &i);

#endif //FIXED_CLASS_HPP_