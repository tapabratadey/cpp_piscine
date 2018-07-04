/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.Class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:27:58 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 21:28:00 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.Class.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
	: Form(copy), target(copy.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) 
{
	this->Form::operator=(rhs);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &exec) const 
{
	if (!this->canExecute(exec))
		throw Form::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	std::cout
		<< "Makes some drilling noises, and tells us that <" + this->target +
			   "> has been robotomized successfully 50% of the time. the " +
			   "rest of times, tells us it's a failure\n";
}

