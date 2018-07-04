/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:54:42 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 12:54:43 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.Class.hpp"

                            /*COPY CONSTRUCTOR*/

Bureaucrat::~Bureaucrat() { }//destructor
// default constructor sets name and grade within conditions
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
        // this->name = name;
	    this->grade = grade;
}
//copy constructor
Bureaucrat::Bureaucrat(Bureaucrat const &copy) { *this = copy; }

                            /*OPERATORS*/

//assignation operator
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->grade = rhs.getGrade();
    return (*this);
}
//increment operator 
void Bureaucrat::operator+=(int number)
{
	if (this->grade - number < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= number;    
}
//decrement operator 
void Bureaucrat::operator-=(int number)
{
	if (this->grade + number > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += number;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
    out << "Bureaucrat: " << rhs.getName() << " Grade: " << rhs.getGrade();
    return (out);
}
                            
                            /*GET FUNCTIONS*/

std::string Bureaucrat::getName() const { return this->name; }
int Bureaucrat::getGrade() const { return this->grade; }
void Bureaucrat::incrementGrade(int number) { return *this += number; }
void Bureaucrat::decrementGrade(int number) { return *this -= number; }

void Bureaucrat::signForm(Form *form, std::string message)
{
	if (form->getSigned())
		std::cout << "<" << this->getName() << "> signs <"
			<< form->getName() << ">." << std::endl;
	else
		std::cout << "<" << this->getName() << "> cannot sign <"
			<< form->getName() << "> because <" << message << ">." << std::endl;
}

void Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}


                            /*GradeTooHighException*/

Bureaucrat::GradeTooHighException::GradeTooHighException() { }
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { }
Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &copy) { *this = copy; }


Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &copy)
{
	(void)copy;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade is too HIGH!"); }


                            /*GradeTooLowException*/

Bureaucrat::GradeTooLowException::GradeTooLowException(void) { }
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { }
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &copy){ *this = copy; }
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &copy)
{
	(void)copy;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW!");
}


