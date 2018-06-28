#include "Pony.Class.hpp"
#include <string>

Pony::Pony(std::string voice) : voice(voice)
{
    std::cout << "Constructor invoked." << std::endl;
    std::cout << voice << std::endl;
}

Pony::~Pony()
{
    std::cout << "Destructor invoked." << std::endl;
}
