#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_
#include <iostream>
#include "Contact.Class.hpp"
class Phonebook
{
        static Contact noOfContacts[8];
    public:
        Phonebook();
        ~Phonebook();
        // addContacts();
};

#endif // PHONEBOOK_H_