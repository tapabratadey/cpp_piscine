/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:37:48 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 21:37:50 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

int main()
{
    std::string output = "HI THIS IS BRAIN";
    std::string *pointerToOutput = &output;
    std::string &referenceToOutput = output;

    std::cout << "Main String: " << output << std::endl;
    std::cout << "Pointer String: " << *pointerToOutput << std::endl;
    std::cout << "Reference String: " << referenceToOutput << std::endl;
}