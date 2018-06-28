/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:50:28 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 22:50:31 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_CLASS_H_
#define HUMAN_CLASS_H_
#include <iostream>
#include "Human.Class.hpp"
#include "Brain.Class.hpp"

class Human
{
        const Brain brain;
    public:
        Human();
        ~Human();
        std::string identify();
        const Brain &getBrain();
};

#endif //HUMAN_CLASS_H_