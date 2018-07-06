/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:27:30 by tadey             #+#    #+#             */
/*   Updated: 2018/07/06 13:27:33 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void easyfind(T &container, int num)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator ite = container.end();

    while (it != ite)
    {
        if (*it == num)
        {
            std::cout << "num is in the array" << std::endl;
            return ;
        }
        else
            throw std::exception();
    }
}

#if 0
STL - Standard Template Library
Contains- 
        -containers(generic templated containers)
            -containers is a class/data structure/an abstract
            data type
            -they store objects in organized way that follows
            specific access rules.
        -algorithms
Common container: std::list
std::map- equivalent to hashtable
std::vector- container that encapsulates dynamic size arrays
#endif
