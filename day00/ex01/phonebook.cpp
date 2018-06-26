#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"

//constructor
Contact::Contact(std::string firstName,
        std::string lastName,
        std::string nickName,
        std::string login,
        std::string postalAddress,
        std::string emailAddress,
        std::string phoneNumber,
        std::string birthDate,
        std::string favoriteMeal,
        std::string underwearColor,
        std::string darkestSecret)
    : firstName(firstName),
    lastName(lastName),
    nickName(nickName),
    login(login),
    postalAddress(postalAddress),
    emailAddress(emailAddress),
    phoneNumber(phoneNumber),
    birthDate(birthDate),
    favoriteMeal(favoriteMeal),
    underwearColor(underwearColor),
    darkestSecret(darkestSecret)
{
    std::cout << "Constructor called." << std::endl;
}

//destructor
Contact::~Contact()
{
    std::cout << "Destructor called." << std::endl;
}
