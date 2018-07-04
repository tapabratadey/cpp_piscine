/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:02:36 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 23:02:38 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.Class.hpp"

                                /*CONSTRUCTOR*/

Intern::Intern() { }
Intern::~Intern() { }
Intern::Intern(Intern const &copy) { *this = copy; }
Intern &Intern::operator=(Intern const &) { return *this; }

                                /*FUNC*/

Form *Intern::makeForm(std::string name, std::string form)
{
    if (name == "robotmy request")
    {
        std::cout << "Intern creates " << form << std::endl;
        return new RobotomyRequestForm(form);
    }
    else if (name == "presidential pardon")
    {
        std::cout << "Intern creates " << form << std::endl;
        return new PresidentialPardonForm(form);
    }
    else if (name == "shrubbery creation form")
    {
        std::cout << "Intern creates " << form << std::endl;
        return new ShrubberyCreationForm(form);
    }
    else
        throw Intern::FormNotFound();
    
}

                                /*EXCEPTION*/
Intern::FormNotFound::FormNotFound() {}
Intern::FormNotFound::~FormNotFound() throw() {}
Intern::FormNotFound::FormNotFound(const Intern::FormNotFound &copy) { *this = copy; }
Intern::FormNotFound &Intern::FormNotFound::operator=(const Intern::FormNotFound &)
{ return *this; }
const char *Intern::FormNotFound::what() const throw() {return "Form not found..."; }
