/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 13:36:52 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 13:36:53 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Convert.Class.hpp"

int main(int argc, char **argv)
{
    char ch;
    int num;
    if (argc != 2)
    {
        std::cout << "usage: ./convert <scalar_type><int/double/char/float" << std::endl;
        return (0);
    }
    Convert convert(argv[1]);
    
    //char 
    std::cout << "char: ";
    try
    {
        ch = static_cast<char>(convert);
        try
        {
            num = static_cast<int>(convert);
            if (num != ch)
                std::cout << "Can't convert" << std::endl;
            else
                throw std::exception();
        }
        catch (std::exception)
        {
            if (ch >= 32 && ch <= 126)
                std::cout << ch << std::endl;
            else    
                std::cout << "naaahhh man" << std::endl;
        }
    }
    catch(std::exception)
    {
        std::cout << "comeon man u can't convert" << std::endl;
    }

    //int
    std::cout << "int: ";
    try
    { std::cout << static_cast<int>(convert) << std::endl; }
    catch(std::exception)
    { std::cout << "comeon man u can't convert" << std::endl; }   


    //float
	std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: ";

	try
	{ std::cout << static_cast<float>(convert) << "f" << std::endl; }
	    catch (std::exception)
	{ std::cout << "Conversion not possible" << std::endl; }    

    //double
    std::cout << "double: ";

	try
	{ std::cout << static_cast<double>(convert) << std::endl; }
	    catch (std::exception)
	{ std::cout << "Conversion not possible" << std::endl; }
    return (0);
}