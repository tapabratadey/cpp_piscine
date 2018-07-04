/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:54:56 by tadey             #+#    #+#             */
/*   Updated: 2018/07/03 12:54:57 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.Class.hpp"
#include "Form.Class.hpp"

int main()
{
    Bureaucrat tapa("tapa", 100);
    Bureaucrat harry("harry", 150);
	Bureaucrat turnitaround("empire", 1);
    Form form3("whatup", 100, 30);
    Form form4("bruh", 30, 2);
	Form form5("Fishing Permit", 25, 10);
    std::cout << form5 << std::endl;
    std::cout << "Forms" << std::endl << std::endl;



#if 1
    std::cout << "Signing" << std::endl;
    try
    {
        form5.beSigned(turnitaround);
    }
    catch(Form::GradeTooLowException &exc)
    {
        std::cout << "caught expected error" << std::endl;
    }
    catch(std::exception &exc)
    {
        std::cout << exc.what() << std::endl;
    }
#endif

#if 1
    std::cout << "double signing" << std::endl;
	bool result = form5.beSigned(turnitaround);
	if (result)
		std::cout << "form signed twice." << std::endl << std::endl;
	else
		std::cout << "nope i will not let you sign for twice." << std::endl << std::endl;
#endif 

#if 1

    std::cout << "extreme grade signing" << std::endl;
    try
    {
        Form form1("Driving permit", 70, 0);
        Form form2("Drinking permit", 0, 3);
        std::cout << "Can't instantiate" << std::endl
                  << std::endl;
    }
    catch (Form::GradeTooLowException &exception)
    {
        std::cout << "caught expected error" << std::endl
                  << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
        std::cout << "Caught unexpected error!" << std::endl;
    }
#endif

#if 0
    Bureaucrat tapa("tapa", 100);
    Bureaucrat harry("harry", 150);
    Bureaucrat potter("potter", 1);    
    std::cout << tapa << std::endl;    
    std::cout << harry << std::endl;    
    std::cout << potter << std::endl;
#endif
#if 0
    std::cout << "decrementing name" << std::endl;
    std::cout << "Decrement Name: " << tapa.getName() << std::endl;
    tapa+=5;
    std::cout << "Grade: " << tapa.getGrade() << std::endl;

    std::cout << "Increment Name: " << tapa.getName() << std::endl;
    tapa-=5;
    std::cout << "Grade: " << tapa.getGrade() << std::endl;

    std::cout << "error on incrementing" << std::endl;
#endif
#if 0
    std::cout << "errors on increment" << std::endl;

    std::cout << "Increment Bureaucrat: " << potter.getName() << std::endl;
    try
    {
        potter+=1;
        std::cout << "1 is the highest grade" << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &exception)
    {
        std::cout << "caught an expected exception" << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
        std::cout << "caught an unexpected exception" << std::endl;
    }
#endif
#if 0
    std::cout << "errors on decrement" << std::endl;

    std::cout << "Decrementing Bureaucrat: " << potter.getName() << std::endl;
    try
    {
        potter-= 1;
        std::cout << "min grade is 150" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &exception)
    {
        std::cout << "caught an expected execption" << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }
#endif

#if 0
    std::cout << "errors on increment" << std::endl;

    std::cout << "Increment Bureaucrat: " << harry.getName() << std::endl;
    try
    {
        harry+=1;
        std::cout << "1 is the highest grade" << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &exception)
    {
        std::cout << "caught an expected exception" << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
        std::cout << "caught an unexpected exception" << std::endl;
    }
#endif
    // std::cout << harry << std::endl;
#if 0
    std::cout << "errors on decrement" << std::endl;

    std::cout << "Decrementing Bureaucrat: " << harry.getName() << std::endl;
    try
    {
        harry-= 1;
        std::cout << "min grade is 150" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &exception)
    {
        std::cout << "caught an expected execption" << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }
#endif

    return (0);
}