/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.Class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:30:12 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 20:30:13 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.Class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() { }
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
	: Form(copy), target(copy.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) 
{
	this->Form::operator=(rhs);
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &exec) const
{
	if (!this->canExecute(exec))
		throw Form::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	std::cout << "Create a file called <" + this->target +
	"> __shurubbery, and write ASCII trees inside it, in the current directory." << std::endl;
}

