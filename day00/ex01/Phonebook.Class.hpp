#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_
#include <iostream>
#include "Contact.Class.hpp"
#include <string>
#include <iomanip>

class Phonebook
{
        static Contact allContacts[8];
        static int size;
    public:
        Phonebook();
        ~Phonebook();
        Contact addContact(Contact);
        Contact *getAllContacts();
        void print();
        void printContact();
        void printColumn();
};

#endif // PHONEBOOK_H_