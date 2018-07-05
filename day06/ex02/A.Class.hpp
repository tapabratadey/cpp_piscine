/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.Class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:12:36 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 17:12:38 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef A_CLASS_HPP_
#define A_CLASS_HPP_
#include <iostream>
#include "Base.Class.hpp"

class A : public Base
{
    public:
        A();
        ~A();
        A(const A &copy);
        A &operator=(const A &rhs);
};

#endif //A_CLASS_HPP_