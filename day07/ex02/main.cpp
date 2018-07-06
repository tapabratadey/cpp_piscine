/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:42:33 by tadey             #+#    #+#             */
/*   Updated: 2018/07/05 16:42:34 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.Class.hpp"

int main()
{
    // //int
    try
    {
        int j = 0;
        unsigned int numElem = 5;
        Array<int> num = Array<int>(numElem);
        for (int i = 0; i < (int)numElem; i++){
            num[i] = j;
            j++;
            std::cout << num[i];
        }
        std::cout << std::endl;
    }
    catch(std::exception)
    {
        std::cout << "cant init the array" << std::endl;
    }

    //char
    try
    {
        std::string str = "hldsfls";
        Array<char> s = Array<char>(str.length());
        for (int i = 0; i < (int)str.length(); i++){
            s[i] = str[i];
            std::cout << s[i];
        }
        std::cout << std::endl;
    }
    catch(std::exception)
    {
        std::cout << "cant init the array" << std::endl;
    }

    //int
    int j = 0;
    unsigned int numElem = 5;
    Array<int> num = Array<int>(numElem);
    for (int i = 0; i < (int)numElem; i++){
        num[i] = j;
        j++;
        std::cout << num[i];
    }
    std::cout << std::endl;
    try
    {
        num[6] = 6;
    }
    catch(std::exception)
    {
        std::cout << "cant init the array" << std::endl;
    }    

    return (0);
}