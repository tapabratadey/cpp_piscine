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
    const int Fixed::fractionalBits = 8; value will be constant
#endif

const int Fixed::fractionalBits = 8;

//default constructor
Fixed::Fixed()
{
    this->fixedPointValue = 0;
    std::cout << "Default constructor invoked" << std::endl;
}

//default destrutor
Fixed::~Fixed()
{
    std::cout << "Destructor invoked" << std::endl;
}

#if 0
            COPY CONSTRUCTOR
        copy constructor is a member func which inits an object
                using another object of the same class.
#endif 

//copy constructor
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

#if 0
            OPERATOR OVERLOAD
        checks if the old obj is not equal to the new obj
            if not then assigns the instance to the value 
        passed on by getRawBits()
#endif

//operator overload
Fixed &Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->fixedPointValue = rhs.getRawBits();
    return (*this);
}


//getRawBits() returns raw value of fixed point value
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

//setRawBits() sets the raw value of fixed point value
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

