#include "AWeapon.Class.hpp"

AWeapon::AWeapon() { }
AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    // std::cout << "AWeapon constructor created" << std::endl;
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}
AWeapon::~AWeapon() { std::cout << "AWeapon dead" << std::endl; }

AWeapon::AWeapon(AWeapon const &copy)
{
    *this = copy;
    std::cout << "Copy Constructor called" << std::endl;
}

AWeapon &AWeapon::operator=(const AWeapon &rhs)
{
    name = rhs.name;
    apcost = rhs.apcost;
    damage = rhs.damage;
    return (*this);
}

std::string AWeapon::getName() const { return name; }
int AWeapon::getAPCost() const { return apcost; }
int AWeapon::getDamage() const { return damage; }
