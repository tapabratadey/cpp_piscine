#include "PlasmaRifle.Class.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {  }
PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy)  { *this = copy;}
PlasmaRifle::~PlasmaRifle() { std::cout << "PlasmaRifle dead" << std::endl; }
PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
    name = rhs.name;
    apcost = rhs.apcost;
    damage = rhs.damage;
    return (*this);
}
void  PlasmaRifle::attack() const { std::cout << "* piouuu piouuu piouuu *" << std::endl; }