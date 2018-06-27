#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"

Contact user_input_add(Contact contact)
{
    std::string input;
    // std::string

    std::cout << "First name: ";
    std::getline (std::cin,input);
    contact.setFirstName(input);
    std::cout << "Last name: ";
    std::getline (std::cin,input);
    contact.setLastName(input);
    std::cout << "Nickname: ";
    std::getline (std::cin,input);
    contact.setNickName(input);
    std::cout << "Login: ";
    std::getline (std::cin,input);
    contact.setLogin(input);
    std::cout << "Postal Address: ";
    std::getline (std::cin,input);
    contact.setPostalAddress(input);
    std::cout << "Email Address: ";
    std::getline (std::cin,input);
    contact.setEmailAddress(input);
    std::cout << "Phone Number: ";
    std::getline (std::cin,input);
    contact.setPhoneNumber(input);
    std::cout << "Birthdate: ";
    std::getline (std::cin,input);
    contact.setBirthDate(input);
    std::cout << "Favorite Meal: ";
    std::getline (std::cin,input);
    contact.setFavoriteMeal(input);
    std::cout << "Underwear color: ";
    std::getline (std::cin,input);
    contact.setUnderwearColor(input);
    std::cout << "Darkest Secret: ";
    std::getline (std::cin,input);
    contact.setDarkestSecret(input);

    return contact;
}

int check_input(std::string input, Contact &contact)
{
    Phonebook phonebook;
    if (input == "EXIT" || input == "exit")
        user_input_exit();
    else if (input == "ADD" || input == "add")
    {
        contact = user_input_add(contact);
        phonebook.addContact(contact);
        return (1);
    }
    else if (input == "SEARCH" || input == "search")
        phonebook.print();
    else
        return(2);
    return (0);
}

void only_search_n_exit(Contact contact)
{
    std::string input;
    Phonebook phonebook;

    std::cout << std::endl << "You can only choose one of the following: " << std::endl;
    std::cout << "2) SEARCH" << std::endl;
    std::cout << "3) EXIT" << std::endl << std::endl;
    std::cout << "User input: ";

    std::getline (std::cin,input);
    if (input == "EXIT" || input == "exit")
        user_input_exit();
    else if (input == "SEARCH" || input == "search")
    {
        phonebook.print();
        only_search_n_exit(contact);
    }
}

int main(int argc, char **argv)
{
    Contact contact;
    std::string input;
    int i;

    i = 0;
    usage(argc, argv); //usage
    while (i <= MAX_CONTACT)
    {
        if (i == 8)
        {
            only_search_n_exit(contact);
            continue;
        }
        ask_user();                                //ask the user
        std::getline (std::cin,input);           //store user input in input
        if (check_input(input, contact) == 1) //if exit/add/search
            i++;
    }
    return (0);
}