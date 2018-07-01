#ifndef CHARACTER_CLASS_HPP_
#define CHARACTER_CLASS_HPP_
#include <iostream>
#include "AWeapon.Class.hpp"
#include "Enemy.Class.hpp"

class Character
{
        std::string name;
        int ap;
        AWeapon *aWeapon;
    public:
        Character();
        Character(std::string const &name);
        Character(const Character &Character);
        ~Character();
        Character &operator=(const Character &rhs);
        void recoverAP();
        void equip(AWeapon *);
        void attack(EnemyClass *);
        std::string getName() const;
        int getAP() const;
        AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, const Character &rhs);

#endif //CHARACTER_CLASS_HPP_ 