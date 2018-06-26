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