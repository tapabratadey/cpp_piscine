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
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getSigned() const;
    bool beSigned(Bureaucrat &);
    Form &operator=(Form const &rhs);

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
};

std::ostream	&operator<<(std::ostream &out, Form &rhs);

#endif
