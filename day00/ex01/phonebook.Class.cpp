#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"

int Phonebook::size = 1;
Contact Phonebook::allContacts[8];
//constructor
Phonebook::Phonebook()
{
    // std::cout << "Phonebook constructor called." << std::endl;
}

//destructor
Phonebook::~Phonebook()
{
    // std::cout << "Phonebook destructor called." << std::endl;
}

Contact Phonebook::addContact(Contact contact)
{
    return allContacts[Phonebook::size++] = contact;
}

void Phonebook::printContact()
{
    std::string input;

    std::cout << std::endl << "Choose an index: ";
    std::getline (std::cin,input);
    if (atoi(input.c_str()) > 0 && atoi(input.c_str()) <= 8)
    {
        std::cout << std::endl << "Contact info for index: " << input << std::endl << std::endl;
        std::cout << "First name: " << allContacts[atoi(input.c_str())].getFirstName() << std::endl;
        std::cout << "Second name: " << allContacts[atoi(input.c_str())].getLastName() << std::endl;
        std::cout << "Nickname: " << allContacts[atoi(input.c_str())].getNickName() << std::endl;
        std::cout << "Login: " << allContacts[atoi(input.c_str())].getLogin() << std::endl;
        std::cout << "Postal Address: " << allContacts[atoi(input.c_str())].getPostalAddress() << std::endl;
        std::cout << "Email Address: " << allContacts[atoi(input.c_str())].getEmailAddress() << std::endl;
        std::cout << "Phone Number: " << allContacts[atoi(input.c_str())].getPhoneNumber() << std::endl;
        std::cout << "Birthdate: " << allContacts[atoi(input.c_str())].getBirthDate() << std::endl;
        std::cout << "Favorite meal: " << allContacts[atoi(input.c_str())].getFavoriteMeal() << std::endl;
        std::cout << "Underwear color: " << allContacts[atoi(input.c_str())].getUnderwearColor() << std::endl;
        std::cout << "Darkest secret: " << allContacts[atoi(input.c_str())].getDarkestSecret() << std::endl;    
    }
    else
    {
        std::cout << std::endl << "Choose an index between 1 to 8" << std::endl;
        Phonebook::printContact();
    }
    return ;
}

void Phonebook::printColumn()
{
    std::string index = "INDEX";
    std::string frstName = "FIRST NAME";
    std::string lstName = "LAST NAME";
    std::string nckName = "NICKNAME";
    std::cout << std::setw(11) << std::endl << std::right << index.append("|");
    std::cout << std::setw(11) << std::right << frstName.append("|");
    std::cout << std::setw(11) << std::right << lstName.append("|");
    std::cout << std::setw(11) << std::right << nckName.append("|") << std::endl;
    std::cout.width(20); std::cout << "   ________________________________________";
    std::cout << std::endl << std::endl;
}

Contact *Phonebook::getAllContacts()
{ 
    return allContacts; 
}

void Phonebook::print()
{
    int i = 1;
    Phonebook::printColumn();
    while (i < size)
    {
        std::cout << std::setw(10) << std::right << i;
        std::cout << "|";
        if (allContacts[i].getFirstName().length() > 10)
        {
            std::cout << std::setw(10) << std::right << allContacts[i].getFirstName().substr(0, 9).append(".");
            std::cout << "|";
        }
        if (allContacts[i].getFirstName().length() < 10)
        {
            std::cout << std::setw(10) << std::right << allContacts[i].getFirstName();
            std::cout << "|";
        }
        if (allContacts[i].getLastName().length() > 10)
        {
            std::cout << std::setw(10) << std::right << allContacts[i].getLastName().substr(0, 9).append(".");
            std::cout << "|";
        }
        if (allContacts[i].getLastName().length() < 10)
        {
            std::cout << std::setw(10) << std::right << allContacts[i].getLastName();
            std::cout << "|";
        }
        if (allContacts[i].getNickName().length() > 10)
        {
            std::cout << std::setw(10) << std::right << allContacts[i].getNickName().substr(0, 9).append(".");
            std::cout << "|";
        }
        if (allContacts[i].getNickName().length() < 10)
        {
            std::cout << std::setw(10) << std::right << allContacts[i].getNickName();
            std::cout << "|";
        }
        std::cout << std::endl;
        i++;
    }
    if (i == 1)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    Phonebook::printContact();
}
