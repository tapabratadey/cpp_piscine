/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.Class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:12:50 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 17:12:51 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef B_CLASS_HPP_
#define B_CLASS_HPP_
#include <iostream>
#include "Base.Class.hpp"

class B : public Base
{
    public:
        B();
        ~B();
        B(const B &copy);
        B &operator=(const B &rhs);
};

#endif //B_CLASS_HPP_