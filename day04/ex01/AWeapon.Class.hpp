#ifndef AWEAPON_CLASS_HPP_
#define AWEAPON_CLASS_HPP_
#include <iostream>

class AWeapon
{
    protected:
        std::string name;
        int apcost;
        int damage;
    public:
        AWeapon();
        AWeapon(std::string const &name, int apcost, int damage);
        AWeapon(AWeapon const &copy);
        virtual ~AWeapon();
        AWeapon &operator=(const AWeapon &rhs);
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif //AWEAPON_CLASS_HPP_