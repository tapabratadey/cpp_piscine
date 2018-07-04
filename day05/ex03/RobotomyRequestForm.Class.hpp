/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.Class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:28:08 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 21:28:09 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

#include "Bureaucrat.Class.hpp"
#include "Form.Class.hpp"
#include <iostream>

class Bureaucrat;
class RobotomyRequestForm : public Form
{
	const std::string target;
  public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	void execute(const Bureaucrat & exec) const;
};

#endif