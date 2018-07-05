/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:13:12 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 17:13:13 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_CLASS_HPP_
#define BASE_CLASS_HPP_
#include <iostream>
class A;
class B;
class C;
class Base
{
    public:
        Base();
        virtual ~Base();
        Base(const Base &copy);
        Base &operator=(const Base &hrs);
};

#endif //BASE_CLASS_HPP_