/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:43:27 by tadey             #+#    #+#             */
/*   Updated: 2018/07/05 16:43:28 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_CLASS_HPP_
#define ARRAY_CLASS_HPP_
#include <iostream>

template <typename T>
class Array
{
        T *array;//array of type T
        unsigned int size;
    public:
        Array<T>()//empty constructor creates an empty array
        {
            this->array = nullptr;
            this->size = 0;
        }

        ~Array<T>()//destructor
        { 
            delete[]array;
        }

        Array<T>(unsigned int n)//constructor creates an array of n elements
        { 
            this->array = new T[n];
            this->size = n;
        }
        
        Array<T>(const Array &copy)//copy constructor
        { 
            *this = copy; 
        }

        Array<T> &operator=(const Array<T> &rhs)//assigning operator
        {
            this->size = rhs.size;
            this->array = rhs.array;
            return *this;
        }

        T &operator[](unsigned int elemIndex)//operator[]
        {
            if (elemIndex > this->size)
                throw std::exception();
            else
                return (this->array[elemIndex]);            
        }

        unsigned int funcSize()//size func
        { 
            return this->size; 
        }
};

#endif //ARRAY_CLASS_HPP_