#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"

Contact user_input_add(Contact contact)
{
    std::string input;

    std::cout << "First name: ";
    std::cin >> input;
    contact.setFirstName(input);
    std::cout << "Last name: ";
    std::cin >> input;
    contact.setLastName(input);
    std::cout << "Nickname: ";
    std::cin >> input;
    contact.setNickName(input);
    std::cout << "Login: ";
    std::cin >> input;
    contact.setLogin(input);
    std::cout << "Postal Address: ";
    std::cin >> input;
    contact.setPostalAddress(input);
    std::cout << "Email Address: ";
    std::cin >> input;
    contact.setEmailAddress(input);
    std::cout << "Phone Number: ";
    std::cin >> input;
    contact.setPhoneNumber(input);
    std::cout << "Birthdate: ";
    std::cin >> input;
    contact.setBirthDate(input);
    std::cout << "Favorite Meal: ";
    std::cin >> input;
    contact.setFavoriteMeal(input);
    std::cout << "Underwear color: ";
    std::cin >> input;
    contact.setUnderwearColor(input);
    std::cout << "Darkest Secret: ";
    std::cin >> input;
    contact.setDarkestSecret(input);

    return contact;
}


void user_input_search(std::string input, Contact *contact)
{
    int i = 0;
    std::cout << "hello" << std::endl;
    std::cout.width(10); std::cout << std::right << contact->getFirstName();

    std::cout.width(10); std::cout << std::right << "       INDEX   |";
    std::cout.width(10); std::cout << std::right << "   FIRST NAME  |";
    std::cout.width(10); std::cout << std::right << "   LAST NAME   |";
    std::cout.width(10); std::cout << std::right << "   NICKNAME    |";
    std::cout << std::endl;
    std::cout.width(10); std::cout << std::right << i;
    std::cout.width(10); std::cout << std::right << contact->getFirstName();
    std::cout.width(10); std::cout << std::right << contact->getLastName();
    std::cout.width(10); std::cout << std::right << contact->getNickName();
    input = "haha";
}

void check_input(std::string input, Contact contact)
{
    if (input == "EXIT")
        user_input_exit();
    else if (input == "ADD")
    {
        contact = user_input_add(contact);
        std::cout << "hello: " << contact.getFirstName() << std::endl;
    }
    else if (input == "SEARCH")
        user_input_search(input, &contact);
    else
        return;
}
#if 0
void only_search_n_exit(Contact contact)
{
    std::string input;

    std::cout << std::endl << "You can only choose one of the following: " << std::endl;
    std::cout << "2) SEARCH" << std::endl;
    std::cout << "3) EXIT" << std::endl << std::endl;
    std::cout << "User input: ";

    std::cin >> input;
    if (input == "EXIT")
        user_input_exit();
    else if (input == "SEARCH")
    {
        user_input_search(input, contact);
        only_search_n_exit(contact);
    }
}
#endif

int main(int argc, char **argv)
{
    Contact contact;
    std::string input;
    int i;

    i = 0;
    usage(argc, argv); //usage
    while (i <= MAX_CONTACT)
    {
        #if 0
        if (i == 8){
            only_search_n_exit(contact);
            break;
        }
        #endif
        ask_user(); //ask the user
        std::cin >> input; //store user input in input
        check_input(input, contact);//if exit/add/search
        i++;
    }
    return (0);
}