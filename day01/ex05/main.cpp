/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:50:38 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 22:50:38 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.Class.hpp"
#include "Brain.Class.hpp"

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
    return (0);
} 