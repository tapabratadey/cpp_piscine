#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"

//constructor
Contact::Contact()
{
    // std::cout << "Contact constructor called." << std::endl;
}

//destructor
Contact::~Contact()
{
    // std::cout << "Contact destructor called." << std::endl;
}

void Contact::setFirstName(std::string input) 
{ 
    this->firstName = input; 
}

void Contact::setLastName(std::string input) 
{ 
    this->lastName = input; 
}

void Contact::setNickName(std::string input) 
{ 
    this->nickName = input; 
}

void Contact::setLogin(std::string input) 
{ 
    this->login = input; 
}

void Contact::setPostalAddress(std::string input) 
{ 
    this->postalAddress = input; 
}

void Contact::setEmailAddress(std::string input) 
{ 
    this->emailAddress = input;
}

void Contact::setPhoneNumber(std::string input) 
{ 
    this->phoneNumber = input; 
}

void Contact::setBirthDate(std::string input) 
{ 
    this->birthDate = input; 
}

void Contact::setFavoriteMeal(std::string input) 
{ 
    this->favoriteMeal = input; 
}

void Contact::setUnderwearColor(std::string input) 
{ 
    this->underwearColor = input; 
}

void Contact::setDarkestSecret(std::string input) 
{ 
    this->darkestSecret = input; 
}

std::string Contact::getFirstName() 
{ 
    return this->firstName; 
}

std::string Contact::getLastName() 
{ 
    return this->lastName; 
}

std::string Contact::getNickName() 
{ 
    return this->nickName; 
}

std::string Contact::getLogin() 
{ 
    return this->login; 
}

std::string Contact::getPostalAddress() 
{ 
    return this->postalAddress; 
}

std::string Contact::getEmailAddress() 
{ 
    return this->emailAddress; 
}

std::string Contact::getPhoneNumber() 
{ 
    return this->phoneNumber; 
}

std::string Contact::getBirthDate() 
{ 
    return this->birthDate; 
}

std::string Contact::getFavoriteMeal() 
{ 
    return this->favoriteMeal; 
}

std::string Contact::getUnderwearColor() 
{ 
    return this->underwearColor; 
}

std::string Contact::getDarkestSecret() 
{ 
    return this->darkestSecret; 
}