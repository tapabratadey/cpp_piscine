#ifndef POWER_FIST_CLASS_HPP_
#define POWER_FIST_CLASS_HPP_
#include <iostream>
#include "AWeapon.Class.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(const PowerFist &copy);
        ~PowerFist();
        PowerFist &operator=(const PowerFist &rhs);
        virtual void  attack() const;
};

#endif