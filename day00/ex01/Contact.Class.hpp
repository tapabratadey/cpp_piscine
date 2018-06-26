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
        Contact();//constructor
        ~Contact();//destructor
        void           setFirstName(std::string input) { this->firstName = input; }
        void           setLastName(std::string input) { this->lastName = input; }
        void           setNickName(std::string input) { this->nickName = input; }
        void           setLogin(std::string input) { this->login = input; }
        void           setPostalAddress(std::string input) { this->postalAddress = input; }
        void           setEmailAddress(std::string input) { this->emailAddress = input; }
        void           setPhoneNumber(std::string input) { this->phoneNumber = input; }
        void           setBirthDate(std::string input) { this->birthDate = input; }
        void           setFavoriteMeal(std::string input) { this->favoriteMeal = input; }
        void           setUnderwearColor(std::string input) { this->underwearColor = input; }
        void           setDarkestSecret(std::string input) { this->darkestSecret = input; }
        std::string    getFirstName() { return this->firstName; }
        std::string    getLastName() { return this->lastName; }
        std::string    getNickName() { return this->nickName; }
        std::string    getLogin() { return this->login; }
        std::string    getPostalAddress() { return this->postalAddress; }
        std::string    getEmailAddress() { return this->emailAddress; }
        std::string    getPhoneNumber() { return this->phoneNumber; }
        std::string    getBirthDate() { return this->birthDate; }
        std::string    getFavoriteMeal() { return this->favoriteMeal; }
        std::string    getUnderwearColor() { return this->underwearColor; }
        std::string    getDarkestSecret() { return this->darkestSecret; }
};

void usage(int argc, char **argv);
void ask_user();
void user_input_exit();

#endif //CONTACT_H_