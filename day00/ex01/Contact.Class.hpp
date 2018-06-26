#ifndef CONTACT_H_
#define CONTACT_H_
#include <iostream>
#define MAX_CONTACT 8
#define CHAR_WIDTH 10

class Contact
{
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;
    public:
        Contact();
        Contact(std::string firstName,
        std::string lastName,
        std::string nickName,
        std::string login,
        std::string postalAddress,
        std::string emailAddress,
        std::string phoneNumber,
        std::string birthDate,
        std::string favoriteMeal,
        std::string underwearColor,
        std::string darkestSecret);//constructor
        ~Contact();//destructor
        //void    setContact();
        // std::string getContact() { return std::string; }
};

#endif //CONTACT_H_