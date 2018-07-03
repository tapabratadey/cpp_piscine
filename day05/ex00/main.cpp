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

int main()
{
    Bureaucrat tapa("tapa", 100);
    Bureaucrat harry("harry", 150);
    Bureaucrat potter("potter", 1);    
    std::cout << tapa << std::endl;    
    std::cout << harry << std::endl;    
    std::cout << potter << std::endl;

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