/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dragons.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:43:31 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:43:32 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DRAGONS_CLASS_HPP_
#define DRAGONS_CLASS_HPP_
#include <iostream>
#include "Entity.Class.hpp"

class Dragons : public Entity
{
    public:
        Dragons();
        ~Dragons();
        Dragons(int row, int col);
        Dragons(Dragons const &copy);
        Dragons &operator=(const Dragons &rhs);
        void placeDragons(int ***gameMap);
        void moveDragons(int ***gameMap, std::string instr);
};

#endif //DRAGONS_CLASS_HPP_