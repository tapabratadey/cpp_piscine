/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:35:37 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 16:35:39 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.Class.hpp"

                            /*Constructors*/

Form::~Form() { }
Form::Form(std::string const name, int signGrade, int execGrade) :
    name(name), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
} 

Form::Form(Form const &copy) :name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade)
{ 
    *this = copy;
}

Form &Form::operator=(Form const &rhs)
{
    this->checkSigned = rhs.getSigned();
    return (*this);
}

                            /*GET FUNCTIONS*/

std::string Form::getName() const { return this->name; }
int Form::getSignGrade() const { return this->signGrade; }
int Form::getExecGrade() const { return this->execGrade; }
bool Form::getSigned() const { return this->checkSigned; }

bool Form::beSigned(Bureaucrat &bureaucrat)
{
    if (!this->checkSigned)
    {
        if (bureaucrat.getGrade() <= this->signGrade)
        {
            this->checkSigned = true;
            bureaucrat.signForm(this, "");
            return true;
        }
        else
        {
            bureaucrat.signForm(this, "bureaucrat grade low!");
            throw Form::GradeTooLowException();
        }
    }
    return false;
}

std::ostream &operator<<(std::ostream &out, Form &rhs)
{
    out<< rhs.getName() << "<" << (rhs.getSigned() ? "Signed" : "Unsigned")
    << ">< Level " << rhs.getSignGrade() << " To Sign><Level "
    << rhs.getExecGrade() << " To Execute>";
    return (out);
}
                            /*GradeTooHighException*/

Form::GradeTooHighException::GradeTooHighException() { }
Form::GradeTooHighException::~GradeTooHighException(void) throw() { }
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &copy) { *this = copy; }


Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &copy)
{
	(void)copy;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() { return ("Grade is too HIGH!"); }


                            /*GradeTooLowException*/

Form::GradeTooLowException::GradeTooLowException(void) { }
Form::GradeTooLowException::~GradeTooLowException(void) throw() { }
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &copy){ *this = copy; }
Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &copy)
{
	(void)copy;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW!");
}
