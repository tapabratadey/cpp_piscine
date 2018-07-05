/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:02:46 by tadey             #+#    #+#             */
/*   Updated: 2018/07/05 16:02:48 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

template<typename T>
void iter(T *array, int length, void (*f)(T &))
{
    int i = 0;
    while (i < length)
    {
        f(array[i]);
        i++;
    }
}

template<typename T>
void print(T &elem)
{
    std::cout << elem << " ";
}

template<typename T>
void multiply(T &elem)
{
    elem *= 2;
}

template<typename T>
void add(T &elem)
{
    elem += 2;
}

int main()
{
    std::cout << "int" << std::endl;
    int arrayInt[] = {1, 2, 3};
    iter<int>(arrayInt, 3, &print<int>);
    std::cout << std::endl;
    std::cout << "after multiplication by two" << std::endl;
    iter<int>(arrayInt, 3, &multiply<int>);
    iter<int>(arrayInt, 3, &print<int>);    
    std::cout << std::endl;
    std::cout << "after addition by two" << std::endl;
    iter<int>(arrayInt, 3, &add<int>);
    iter<int>(arrayInt, 3, &print<int>);    
    std::cout << std::endl;
    
    
    std::cout << "Char" << std::endl;
    char arrayChar[] = {'a', 'b', 'c'};
    iter<char>(arrayChar, 3, &print<char>);
    std::cout << std::endl;
    std::cout << "after adding by two" << std::endl;
    iter<char>(arrayChar, 3, &add<char>);
    iter<char>(arrayChar, 3, &print<char>);    
    std::cout << std::endl;
    
    std::cout << "Float" << std::endl;
    float arrayFloat[] = {1.1, 1.2, 1.3};
    iter<float>(arrayFloat, 3, &print<float>);
    std::cout << std::endl;
    std::cout << "after multiplication by two" << std::endl;
    iter<float>(arrayFloat, 3, &multiply<float>);
    iter<float>(arrayFloat, 3, &print<float>);
    std::cout << std::endl;
    std::cout << "after addition by two" << std::endl;
    iter<float>(arrayFloat, 3, &add<float>);
    iter<float>(arrayFloat, 3, &print<float>);    
    std::cout << std::endl;
    return (0);
}