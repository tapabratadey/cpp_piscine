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

#if 0
#include "Fixed.h"

/* :> Defining the static variable for the significant figures we want to calc
to. Defined by the pdf to 8 bits (2^8 = 256). */
const int Fixed::_numOfFractionalBits = 8;

/* :> Default Constructor
	- Initializes: _val to 0
*/
Fixed::Fixed() : _val(0){
	std::cout << "Default constructor called." << std::endl;
}

/* :> Int Constructor
	- Converts: an int to the proper fixed class form by shifting the bits by
	the fractional bits amount.
*/
Fixed::Fixed(const int f) : _val(f << _numOfFractionalBits){
	std::cout << "Int constructor called." << std::endl;
}

/* :> Float Constructor
	- Converts: a float to the proper fixed point value. In order to do so,
	first the number must be multiplied by 2^numOfFractionButs =
	1 << _numOfFractionBits. Then the number is rounded for precesion up to 8.
*/
Fixed::Fixed(const float f) : _val(roundf(f * (1 << _numOfFractionalBits))){
	std::cout << "Float constructor called." << std::endl;
}

/* :> toInt
	- Converts: the fixed point value to the int value, by dividing by
	2^_numOfFractionalBits or bit shifting by _numOfFractionalBits.
*/
int Fixed::toInt() const{
	return _val >> _numOfFractionalBits;
}

/* :> toFloat
	- Converts: the fixed point value to the floating point value.
*/
float Fixed::toFloat() const{
	return float(_val / ((float)(1 << _numOfFractionalBits)));
}

/* :> Copy Constructor
	- Assigns: the current class the values of the passed class.
*/
Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called." << std::endl;
	*this = f;
}

/* :> = op Overload: Assignation operator
	- Copies the _val of the lhs to the rhs.
*/
Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Assignation operator called." << std::endl;
	if(this == &rhs)
		return *this;
	_val = rhs.getRawBits();
	return *this;
}

/* :> getRawBits
	- Returns: the raw int _val member variable of the fixed point.
*/
int Fixed::getRawBits()const{
	return _val;
}

/* :> setRawBits
	- Sets: the raw int _val member variable of the fixed point, directly
	modifying it to the int "raw" passed in.
*/
void Fixed::setRawBits(int const raw){
	_val = raw;
}

/* :> Destructor.
	- Everything on stack, so no worries.
*/
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/* :> << operator overload.
	- Takes in any output stream (ostream) and passed the float value of our
	fixed value int to the stream. Then we return this stream so it can be used
	by the stream on the left side of "<<"
*/
std::ostream &operator<<(std::ostream &o, const Fixed &rhs){
	o << rhs.toFloat();
	return o;
}
#endif 