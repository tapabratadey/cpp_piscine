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
        //this const will always be litteral of 8
    public:
        Fixed();//default constructor inits fpv to 0
        ~Fixed();//destructor
        Fixed(const Fixed &);//copy constructor
        Fixed &operator=(const Fixed &);//operator overload
        int getRawBits() const;//returns raw value of fpv
        void setRawBits(int const raw);//sets the raw value of fpv
};


#endif //FIXED_CLASS_HPP_
