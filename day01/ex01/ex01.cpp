/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 08:36:44 by tadey             #+#    #+#             */
/*   Updated: 2018/06/28 08:36:44 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
    std::string *panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}
