#ifndef SUPER_MUTANT_CLASS_HPP_
#define SUPER_MUTANT_CLASS_HPP_
#include <iostream>
#include "Enemy.Class.hpp"

class SuperMutant : public EnemyClass
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(const SuperMutant &copy);
        SuperMutant &operator=(const SuperMutant &rhs);
        void takeDamage(int);
};

#endif //SUPER_MUTANT_CLASS_HPP_