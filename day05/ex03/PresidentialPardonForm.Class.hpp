/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.Class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:34:23 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 21:34:24 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIAL_PARDON_FORM_HPP_
#define PRESIDENTIAL_PARDON_FORM_HPP_

#include "Bureaucrat.Class.hpp"
#include "Form.Class.hpp"
#include <iostream>

class Bureaucrat;
class PresidentialPardonForm : public Form
{
	const std::string target;
  public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	void execute(const Bureaucrat & exec) const;
};

#endif //PRESIDENTIAL_PARDON_FORM_HPP_
