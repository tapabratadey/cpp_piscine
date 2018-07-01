#include "Character.Class.hpp"

Character::Character() { }

Character::Character(std::string const &name) 
{
    this->name = name;
    ap  = 40;
    aWeapon = nullptr;
}

Character::~Character() { std::cout << "Character dead" << std::endl; }
Character::Character(const Character &Character) { *this = Character; }
Character &Character::operator=(const Character &rhs)
{
    name = rhs.name;
    ap = rhs.ap;
    aWeapon = rhs.aWeapon;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Character &rhs)
{
    if (rhs.getWeapon() != nullptr)
    {
        out << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    }
    else
    {
        out << rhs.getName() << " has " << rhs.getAP() << " AP and has no weapon" << std::endl;
    }
    return out;
}

void Character::recoverAP()
{
    if (ap > 30)
        ap = 40;
    else
        ap += 10;
}

void Character::equip(AWeapon *store) { aWeapon = store; }


void Character::attack(EnemyClass *enemyType)
{
    if ((this->aWeapon != nullptr) && (ap > 0))
    {
        std::cout << name << " attacks " << enemyType->getType() << " with a " << aWeapon->getName() << std::endl;
        aWeapon->attack();
        enemyType->takeDamage(aWeapon->getDamage());
        ap -= aWeapon->getAPCost();
        if (enemyType->getHP() <= 0)
            delete enemyType;
    }
}

std::string Character::getName() const { return name; }
int Character::getAP() const { return ap; }
AWeapon *Character::getWeapon() const { return aWeapon; }