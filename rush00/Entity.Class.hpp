/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 03:10:17 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 03:10:17 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENTITY_CLASS_HPP_
#define ENTITY_CLASS_HPP_
#include <iostream>

class Entity
{
    protected:
        int row;
        int col;
    public:
        Entity();
        ~Entity();
        // Entity(int row, int col);
        Entity(Entity const &copy);
        Entity &operator=(const Entity &rhs);
        // virtual void placeEntity(int ***gameMap);
};

std::ostream &operator<<(std::ostream &out, const Entity &rhs);

#endif //ENTITY_CLASS_HPP_