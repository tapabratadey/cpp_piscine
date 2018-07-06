/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:27:40 by tadey             #+#    #+#             */
/*   Updated: 2018/07/06 13:27:41 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main()
{
    std::list<int> lst1;

    lst1.push_back(1);
    lst1.push_back(2);
    
    
    //check a num not in the list
    try
    {
        easyfind<std::list<int> >(lst1, 4);
    }
    catch(std::exception)
    {
        std::cout << "num not in array" << std::endl;   
    }

    //check a num in the list
    try
    {
        easyfind<std::list<int> >(lst1, 1);
    }
    catch(std::exception)
    {
        std::cout << "num not in array" << std::endl;   
    }
    return (0);
}