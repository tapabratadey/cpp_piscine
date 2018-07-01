#ifndef ENEMY_CLASS_HPP_
#define ENEMY_CLASS_HPP_
#include <iostream>

class EnemyClass
{
    protected:
        int hp;
        std::string type;
    public:
        EnemyClass();
        EnemyClass(int hp, std::string const &type);
        EnemyClass(const EnemyClass &copy);
        virtual ~EnemyClass();
        EnemyClass &operator=(const EnemyClass &rhs);
        std::string virtual getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};

#endif //ENEMYClass_CLASS_HPP_
