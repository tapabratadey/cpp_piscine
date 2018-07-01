#ifndef PLASMA_RIFLE_CLASS_HPP_
#define PLASMA_RIFLE_CLASS_HPP_
#include <iostream>
#include "AWeapon.Class.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &copy);
        ~PlasmaRifle();
        PlasmaRifle &operator=(const PlasmaRifle &rhs);
        void  attack() const;
};

#endif