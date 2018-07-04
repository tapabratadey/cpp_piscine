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
#include "ShrubberyCreationForm.Class.hpp"
#include "RobotomyRequestForm.Class.hpp"
#include "PresidentialPardonForm.Class.hpp"
#include "Intern.Class.hpp"
int main()
{
    Bureaucrat tapa("tapa", 1);
	Intern intern;
	try 
    {
		intern.makeForm("tapa", "bro");
	} 
    catch (Intern::FormNotFound &e) 
    {
		std::cout << "expected" << std::endl;
	}
    catch (std::exception &e) 
    {
		std::cout << "unexpected" << std::endl;
	}

#if 0
    Bureaucrat tapa("tapa", 30);
    Bureaucrat bro("bro", 100);    
    std::cout << "test for ex00" << std::endl;
    ShrubberyCreationForm shrubForm("hi");
    std::cout << shrubForm << std::endl;
    std::cout << "Signing Grade: " << shrubForm.getSignGrade() << std::endl;
    std::cout << "Executition Grade: " << shrubForm.getExecGrade() << std::endl;
    try
    {
        /* code */
        std::cout << "can it for be signed/beSigned/is gradeToolow" << std::endl;
        shrubForm.beSigned(tapa);
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << "exception caught" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "unexpected exception" << std::endl;
    }

    std::cout << "can the shrubForm get executed" << std::endl;
    bro.executeForm(shrubForm);
    shrubForm.beSigned(bro);
    if (shrubForm.getSigned() == true)
        std::cout << "got signed" << std::endl;
    else
        std::cout << "didn't get signed" << std::endl;
    

    std::cout << "robotomy test" << std::endl;
    RobotomyRequestForm robotForm("tired");
    std::cout << robotForm << std::endl;
    std::cout << "Signing Grade: " << robotForm.getSignGrade() << std::endl;
    std::cout << "Executition Grade: " << robotForm.getExecGrade() << std::endl;
    try
    {
        /* code */
        std::cout << "can it for be signed/beSigned/is gradeToolow" << std::endl;
        robotForm.beSigned(tapa);
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << "exception caught" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "unexpected exception" << std::endl;
    }
    std::cout << "can the robotForm get executed" << std::endl;
    bro.executeForm(robotForm);
    robotForm.beSigned(bro);
    
    std::cout << "presidential test" << std::endl;
    PresidentialPardonForm presForm("tired");
    std::cout << presForm << std::endl;
    std::cout << "Signing Grade: " << presForm.getSignGrade() << std::endl;
    std::cout << "Executition Grade: " << presForm.getExecGrade() << std::endl;
    try
    {
        /* code */
        std::cout << "can it for be signed/beSigned/is gradeToolow" << std::endl;
        presForm.beSigned(tapa);
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << "exception caught" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "unexpected exception" << std::endl;
    }
#endif
#if 0
    Bureaucrat tapa("tapa", 100);
    Bureaucrat harry("harry", 150);
	Bureaucrat turnitaround("empire", 1);
    Form form3("whatup", 100, 30);
    Form form4("bruh", 30, 2);
	Form form5("Fishing Permit", 25, 10);
    std::cout << form5 << std::endl;
    std::cout << "Forms" << std::endl << std::endl;
#endif


#if 0
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
#if 0
    std::cout << "double signing" << std::endl;
	bool result = form5.beSigned(turnitaround);
	if (result)
		std::cout << "form signed twice." << std::endl << std::endl;
	else
		std::cout << "nope i will not let you sign for twice." << std::endl << std::endl;
#endif
#if 0
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