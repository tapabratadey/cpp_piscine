#include "AWeapon.Class.hpp"
#include "PlasmaRifle.Class.hpp"
#include "PowerFist.Class.hpp"
#include "Enemy.Class.hpp"
#include "RadScorpion.Class.hpp"
#include "SuperMutant.Class.hpp"
#include "Character.Class.hpp"

int main()
{
    Character *zaz = new Character("zaz");
    std::cout << *zaz;
    EnemyClass *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return 0;
}