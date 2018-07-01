#ifndef RAD_SCORPION_CLASS_HPP_
#define RAD_SCORPION_CLASS_HPP_
#include "Enemy.Class.hpp"

class RadScorpion : public EnemyClass
{
    public:
        RadScorpion();
        ~RadScorpion();
        RadScorpion(const RadScorpion &copy);
        RadScorpion &operator=(const RadScorpion &rhs);
};

#endif //RAD_SCORPION_CLASS_HPP_