/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.Class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:13:25 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 17:13:27 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef C_CLASS_HPP_
#define C_CLASS_HPP_
#include <iostream>
#include "Base.Class.hpp"

class C : public Base
{
    public:
        C();
        ~C();
        C(const C &copy);
        C &operator=(const C &rhs);
};

#endif //C_CLASS_HPP_