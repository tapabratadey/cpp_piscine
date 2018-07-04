/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:36:11 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 16:36:12 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP_
#define FORM_CLASS_HPP_

#include <iostream>
#include "Bureaucrat.Class.hpp"

class Bureaucrat;
class Form
{
    std::string const name;
    bool checkSigned;
    int const signGrade;
    int const execGrade;
  public:
    Form();
    virtual ~Form();
    Form(std::string const name, int signedGrade, int execGrade);
    Form(Form const &copy);
    Form &operator=(Form const &rhs);
    std::string getName() const;
    bool getSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool beSigned(Bureaucrat &);
    bool canExecute(const Bureaucrat &exec) const;
    virtual	void execute(const Bureaucrat &exec) const = 0;

    class GradeTooHighException : public std::exception
    {
      public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &copy);
        virtual ~GradeTooHighException() throw();
        GradeTooHighException &operator=(GradeTooHighException const &rhs);
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
      public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &copy);
        virtual ~GradeTooLowException() throw();
        GradeTooLowException &operator=(GradeTooLowException const &rhs);
        virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
      public:
        FormNotSignedException();
        virtual ~FormNotSignedException() throw();
        FormNotSignedException(const FormNotSignedException &copy);
        FormNotSignedException &operator=(const FormNotSignedException &rhs);
        const char * what() const throw();
    };
};

std::ostream	&operator<<(std::ostream &out, Form &rhs);

#endif
