/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:12:59 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 17:13:04 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.Class.hpp"

Base::Base() {  }
Base::~Base() { }
Base::Base(const Base &copy) { *this = copy; }
Base &Base::operator=(const Base &){ return *this; }