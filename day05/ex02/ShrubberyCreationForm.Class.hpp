/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.Class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:30:01 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 20:30:02 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERY_CREATION_FORM_H_
#define SHRUBBERY_CREATION_FORM_H_

#include "Bureaucrat.Class.hpp"
#include "Form.Class.hpp"
#include <iostream>

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
	const std::string target;
  public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	void execute(const Bureaucrat & exec) const;
};

#endif //SHRUBBERY_CREATION_FORM_H_
