/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:54:48 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 12:54:48 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H_
#define BUREAUCRAT_CLASS_H_
#include <iostream>

class Bureaucrat
{
        std::string const name;
        int grade;//range from 1 to 150
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int);
        void decrementGrade(int);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        void		operator+=(int);
        void		operator-=(int);

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException();
                ~GradeTooHighException() throw();
                GradeTooHighException(GradeTooHighException const &copy);
                GradeTooHighException &operator=(GradeTooHighException const &rhs);
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                ~GradeTooLowException() throw();
                GradeTooLowException(GradeTooLowException const &copy);
                GradeTooLowException &operator=(GradeTooLowException const &rhs);
                virtual const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif //BUREAUCRAT_H_


#if 0
It must have a constant name, and a grade, that ranges from 1 (highest possible) to
150 (lowest possible). Any attempt to create a Bureaucrat with an invalid grade must
throw an exception, which will be either a Bureaucrat::GradeTooHighException or a
Bureaucrat::GradeTooLowException.
You will provide getters for both these attributes (getName and getGrade), and two
functions to increment or decrement the grade. Both these functions will throw the same
exceptions as before if the grade gets too high or too low. Remember, grade 1 is highest,
150 is lowest, so incrementing a grade 3 gives you a grade 2 ...
#endif