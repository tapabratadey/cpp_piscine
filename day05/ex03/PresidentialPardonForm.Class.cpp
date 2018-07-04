/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.Class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:34:15 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 21:34:17 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.Class.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form("PresidentialPardonForm", 25, 5), target(target) { }

PresidentialPardonForm::~PresidentialPardonForm() { }
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
	: Form(copy), target(copy.target) { }

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) 
{
	this->Form::operator=(rhs);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &exec) const 
{
	if (!this->canExecute(exec))
		throw Form::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	std::cout<< "Tells us " + this->target + "has been pardoned by Zaphod Bebblebrox\n";
}