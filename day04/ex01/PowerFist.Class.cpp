#include "PowerFist.Class.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {} //{ std::cout << "PowerFist constructor created" << std::endl; }
PowerFist::PowerFist(const PowerFist &copy)  { *this = copy;}
PowerFist::~PowerFist() { std::cout << "PowerFist dead" << std::endl; }
PowerFist &PowerFist::operator=(const PowerFist &rhs)
{
    name = rhs.name;
    apcost = rhs.apcost;
    damage = rhs.damage;
    return (*this);
}
void  PowerFist::attack() const { std::cout << "* pschhh... SBAM! *" << std::endl; }