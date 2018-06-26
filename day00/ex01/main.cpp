#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"

void    usage(int argc, char **argv)
{
    if (argc != 1)
    {
        std::cerr << "Usage: " << argv[0] << std::endl;    
        exit(0);
    }
}

void ask_user()
{
    std::cout << std::endl << "Choose one of the following: " << std::endl;
    std::cout << "1) ADD" << std::endl;
    std::cout << "2) SEARCH" << std::endl;
    std::cout << "3) EXIT" << std::endl << std::endl;
    std::cout << "User input: ";
}

void user_input_exit()
{
    std::cout << "Goodbye" << std::endl;
    exit(0);
}

Contact user_input_add(Contact *contact)
{
    std::string input;

    std::cout << "First name: ";
    std::cin >> input;
    std::string firstName = input;
    std::cout << "Last name: ";
    std::cin >> input;
    std::string lastName = input;
    std::cout << "Nickname: ";
    std::cin >> input;
    std::string nickName = input;
    std::cout << "Login: ";
    std::cin >> input;
    std::string login = input;
    std::cout << "Postal Address: ";
    std::cin >> input;
    std::string postalAddress = input;
    std::cout << "Email Address: ";
    std::cin >> input;
    std::string emailAddress = input;
    std::cout << "Phone Number: ";
    std::cin >> input;
    std::string phoneNumber = input;
    std::cout << "Birthdate: ";
    std::cin >> input;
    std::string birthDate = input;
    std::cout << "Favorite Meal: ";
    std::cin >> input;
    std::string favoriteMeal = input;
    std::cout << "Underwear color: ";
    std::cin >> input;
    std::string underwearColor = input;
    std::cout << "Darkest Secret: ";
    std::cin >> input;
    std::string darkestSecret = input;

    (*contact)(firstName, lastName, nickName, login, postalAddress,
                    emailAddress, phoneNumber, birthDate, 
                    favoriteMeal, underwearColor, darkestSecret);
}

void user_input_search(std::string input, Contact store)
{
    std::cout.width(10); std::cout << std::right << "       INDEX   |";
    std::cout.width(10); std::cout << std::right << "   FIRST NAME  |";
    std::cout.width(10); std::cout << std::right << "   LAST NAME   |";
    std::cout.width(10); std::cout << std::right << "   NICKNAME    |";
    std::cout << std::endl;
    input = "haha";
}

void check_input(std::string input)
{
    Contact store;
    if (input == "EXIT")
        user_input_exit();
    else if (input == "ADD")
        user_input_add(&store);
    else if (input == "SEARCH")
        user_input_search(input, store);
    else
        return;
}

void only_search_n_exit()
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
        user_input_search(input);
        only_search_n_exit();
    }
}

int main(int argc, char **argv)
{
    std::string input;
    int i;

    i = 0;
    usage(argc, argv); //usage
    while (i <= MAX_CONTACT)
    {
        if (i == 8){
            only_search_n_exit();
            break;
        }
        ask_user(); //ask the user
        std::cin >> input; //store user input in input
        check_input(input);//if exit/add/search
        i++;
    }
    return (0);
}