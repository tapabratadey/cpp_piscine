#include "RadScorpion.Class.hpp"

RadScorpion::RadScorpion() : RadScorpion::EnemyClass(80, "RadScorpion") { std::cout << "* click click click *" << std::endl; }
RadScorpion::~RadScorpion() { std::cout << "* SPROTCH *" << std::endl; }
RadScorpion::RadScorpion(const RadScorpion &copy) { *this = copy; }

RadScorpion &RadScorpion::operator=(const RadScorpion &rhs)
{
    hp = rhs.hp;
    type = rhs.type;
    return (*this);
}
