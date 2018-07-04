/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:02:46 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 23:02:49 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP_
#define INTERN_CLASS_HPP_
#include "PresidentialPardonForm.Class.hpp"
#include "RobotomyRequestForm.Class.hpp"
#include "ShrubberyCreationForm.Class.hpp"

class Intern
{
  public:
    Intern();
    ~Intern();
    Intern(Intern const &copy);
    Intern &operator=(Intern const &rhs);
    Form *makeForm(std::string name, std::string target);
    class FormNotFound : public std::exception
    {
      public:
        FormNotFound();
        ~FormNotFound() throw();
        FormNotFound(const FormNotFound &copy);
        FormNotFound &operator=(const FormNotFound &);
        const char *what() const throw();
    };
};

#endif //INTERN_CLASS_HPP_