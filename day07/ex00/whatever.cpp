/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:31:19 by tadey             #+#    #+#             */
/*   Updated: 2018/07/05 15:31:20 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>

template< typename T>
void swap(T *a, T *b)
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

template< typename T>
T min(T a, T b) { return (a < b ? a : b); }

template< typename T>
T max(T a, T b) { return (a > b ? a : b); }

int main()
{
    int aInt = 1;
    int bInt = 2;
    char aChar = 'a';
    char bChar = 'b';
    float aFloat = 1.2;
    float bFloat = 2.1;

                            // SWAP
    //int-before
    std::cout << "before swapping int" << std::endl;
    std::cout << "aInt: " << aInt << std::endl;
    std::cout << "bInt: " << bInt << std::endl;
    swap<int>(&aInt, &bInt);
    
    //int-after 
    std::cout << "after swapping int" << std::endl;
    std::cout << "aInt: " << aInt << std::endl;
    std::cout << "bInt: " << bInt << std::endl;
    
    //char-before
    std::cout << "before swapping char" << std::endl;
    std::cout << "aChar: " << aChar << std::endl;
    std::cout << "bChar: " << bChar << std::endl;
    swap<char>(&aChar, &bChar);
    
    //char-after
    std::cout << "after swapping int" << std::endl;
    std::cout << "aChar: " << aChar << std::endl;
    std::cout << "bChar: " << bChar << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    
    //float-before
    std::cout << "before swapping float" << std::endl;
    std::cout << "aFloat: " << aFloat << std::endl;
    std::cout << "bFloat: " << bFloat << std::endl;
    swap<float>(&aFloat, &bFloat);
    
    //float-after
    std::cout << "after swapping float" << std::endl;
    std::cout << "aFloat: " << aFloat << std::endl;
    std::cout << "bFloat: " << bFloat << std::endl;

                                //MIN

    std::cout << "min" << std::endl;
    std::cout << "int-min between: " << aInt << " and " << bInt << ": " << min<int>(aInt, bInt) << std::endl;
    std::cout << "float-min between: " << aFloat << " and " << bFloat << ": " << min<float>(aFloat, bFloat) << std::endl;
    std::cout << "char-min between: " << aChar << " and " << bChar << ": " << min<char>(aChar, bChar) << std::endl;

                                //MAX
    std::cout << "max" << std::endl;
    std::cout << "int-max between: " << aInt << " and " << bInt << ": " << max<int>(aInt, bInt) << std::endl;
    std::cout << "float-max between: " << aFloat << " and " << bFloat << ": " << max<float>(aFloat, bFloat) << std::endl;
    std::cout << "char-max between: " << aChar << " and " << bChar << ": " << max<char>(aChar, bChar) << std::endl;
}