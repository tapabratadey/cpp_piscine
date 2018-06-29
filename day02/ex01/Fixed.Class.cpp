/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:03:31 by tadey             #+#    #+#             */
/*   Updated: 2018/06/28 16:03:33 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.Class.hpp"

#if 0
    -integer literals= allows values of integer type
        to be used in expressions directly
        const int Fixed::fractionalBits = 8; 

#endif

#if 0
                COPY CONSTRUCTOR
        copy constructor is a member func which 
        inits an object using another object of the same class.
                INT CONSTRUCTOR
        int constructor converts an int to fpv
        by shifting the bits by the fractionalBits (2^fractionalBits 
        or 1 << fractionalBits)
                FLOAT CONSTRUCTOR
        float constructor converts a float to fpv
        by (multiplying the number by (2^fractionalBits 
        or 1 << fractionalBits)) then the number is rounded for precision.
        then getFloat() with return float from fpv by
        (diving fpv by (2^fractionalBits or 1 << fractionalBits))
#endif

#if 0
            OPERATOR OVERLOAD
    assignment operator= 
        copies the var fpv on the lhs to the rhs
        checks if the old obj is not equal to the new obj
        if not then assigns the instance to the value 
        passed on by getRawBits()
    insertion operato<<
        std::ostream &operator<<(std::ostream &o, const Fixed &rhs)
        this operator inserts a floating point representation of
        the fpv into the parameter output stream
        takes output stream (ostream) and then we pass << the float
        value from the toFloat() func to the ostream. this we return it
        so to use it for std::cout
#endif

//this const will always be litteral of 8
const int Fixed::fractionalBits = 8;

                /* CONSTRUCTOR FUNCTIONS*/

//default constructor
Fixed::Fixed()
{
    this->fixedPointValue = 0;
    std::cout << "Default constructor invoked" << std::endl;
}

//default destructor
Fixed::~Fixed()
{
    std::cout << "Destructor invoked" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
    std::cout << "Copy constructor invoked" << std::endl;
}

//constructor taking in an int
Fixed::Fixed(const int toInt) : fixedPointValue(toInt << fractionalBits)
{
    std::cout << "Int constructor invoked" << std::endl;
}

//constructor taking in a float
Fixed::Fixed(const float toFloat)
{
    this->fixedPointValue = roundf(toFloat * (1 << fractionalBits));
    std::cout << "Float constructor invoked" << std::endl;
}

                /* OPERATOR OVERLOAD FUNCTIONS*/

//operator overload=
Fixed &Fixed::operator=(const Fixed & rhs)
{
    if (this != &rhs)
        this->fixedPointValue = rhs.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

//operator overload<<
std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
    // std::cout << "Insertion operator called" << std::endl;
    out << rhs.toFloat();
    return out;
}

                /* MEMBER FUNCTIONS*/

//getRawBits() returns raw value of fixed point value
int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

//setRawBits() sets the raw value of fixed point value
void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

//toInt func converts the fixed point value to integer value
int Fixed::toInt() const
{
    return this->fixedPointValue >> fractionalBits;
}

//toFloat func converts the fixed point value to floating point value
float Fixed::toFloat() const
{
    return ((float)(this->fixedPointValue) / (1 << fractionalBits));
}