#ifndef CONTACT_H_
#define CONTACT_H_
#include <iostream>
#include <ctype.h>

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
        void           setFirstName(std::string input);
        void           setLastName(std::string input);
        void           setNickName(std::string input);
        void           setLogin(std::string input);
        void           setPostalAddress(std::string input);
        void           setEmailAddress(std::string input);
        void           setPhoneNumber(std::string input);
        void           setBirthDate(std::string input);
        void           setFavoriteMeal(std::string input);
        void           setUnderwearColor(std::string input);
        void           setDarkestSecret(std::string input);
        std::string    getFirstName();
        std::string    getLastName();
        std::string    getNickName();
        std::string    getLogin();
        std::string    getPostalAddress();
        std::string    getEmailAddress();
        std::string    getPhoneNumber();
        std::string    getBirthDate();
        std::string    getFavoriteMeal();
        std::string    getUnderwearColor();
        std::string    getDarkestSecret();
};

void usage(int argc, char **argv);
void ask_user();
void user_input_exit();

#endif //CONTACT_H_