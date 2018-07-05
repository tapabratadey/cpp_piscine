/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:13:39 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 17:13:43 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.Class.hpp"
#include "A.Class.hpp"
#include "B.Class.hpp"
#include "C.Class.hpp"

Base *generate(void)
{
    Base *generate;
    int random = rand() % 3;
    if (random == 0)
    {
        std::cout << "A generated" << std::endl;
        return (generate = new A());
    }
    else if (random == 1)
    {
        std::cout << "B generated" << std::endl;    
        return(generate = new B());
    }
    else
    {
        std::cout << "C generated" << std::endl;
        return(generate = new C());
    }
}

void identify_from_pointer(Base *p)
{
    A *aPointer = dynamic_cast<A*>(p);
    B *bPointer = dynamic_cast<B*>(p);
    C *cPointer = dynamic_cast<C*>(p);
    if (aPointer)
        std::cout << "Indentified from Pointer->A" << std::endl;
    if (bPointer)
        std::cout << "Indentified from Pointer->B" << std::endl;
    if (cPointer)
        std::cout << "Indentified from Pointer->C" << std::endl;
}

#if 1
void identify_from_reference(Base &p)
{
    try
    {
        A &aPointer = dynamic_cast<A&>(p);
        std::cout << "Identified from Reference A" << std::endl;
        static_cast<void>(aPointer);
    }
    catch(std::exception)
    {
        std::cout << "cant identify from refercence A" << std::endl;
    }
    try
    {
        B &bPointer = dynamic_cast<B&>(p);
        std::cout << "Identified from Reference B" << std::endl;    
        static_cast<void>(bPointer);
    }
    catch(std::exception)
    {
        std::cout << "cant identify from refercence B" << std::endl;
    }
    try
    {
        C &cPointer = dynamic_cast<C&>(p);
        std::cout << "Identified from Reference C" << std::endl;    
        static_cast<void>(cPointer);
    }
    catch(std::exception)
    {
        std::cout << "cant identify from refercence C" << std::endl;
    }
    #if 0
    try
    {
        A &aPointer = dynamic_cast<A&>(p);
        B &bPointer = dynamic_cast<B&>(p);
        C &cPointer = dynamic_cast<C&>(p);
        // if (aPointer)
        //     std::cout << "Indentified from Reference->A" << std::endl;
        std::cout << "Indentified from Pointer->A" << std::endl;
        // if (bPointer)
        //     std::cout << "Indentified from Reference->B" << std::endl;
        std::cout << "Indentified from Pointer->B" << std::endl;
        // if (cPointer)
        //     std::cout << "Indentified from Reference->C" << std::endl;
        std::cout << "Indentified from Pointer->C" << std::endl;
        static_cast<void>(aPointer);
        static_cast<void>(bPointer);
        static_cast<void>(cPointer);
    }
    catch(std::exception)
    {
        std::cout << "you can't" << std::endl;
    }
    #endif
}
#endif
int main()
{
    srand(time(NULL));
    // generate();
    Base *pointer = generate();
    identify_from_pointer(pointer);
    identify_from_reference(*pointer);
    return (0);
}