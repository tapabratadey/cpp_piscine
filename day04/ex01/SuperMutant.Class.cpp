#include "SuperMutant.Class.hpp"

SuperMutant::SuperMutant() : SuperMutant::EnemyClass(170, "SuperMutant") 
{ std::cout << "Gaaah. Me want smash heads !"; }
SuperMutant::~SuperMutant() { std::cout << "Aaargh ..." << std::endl; }

SuperMutant::SuperMutant(const SuperMutant &copy) { *this = copy; }

SuperMutant &SuperMutant::operator=(const SuperMutant &rhs)
{
    hp = rhs.hp;
    type = rhs.type;
    return *this;
}

void SuperMutant::takeDamage(int attackDamage) { EnemyClass::takeDamage(attackDamage - 3); }