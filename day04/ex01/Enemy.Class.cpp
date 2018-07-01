#include "Enemy.Class.hpp"

EnemyClass::EnemyClass() { }
EnemyClass::EnemyClass(int hp, std::string const &type) : hp(hp), type(type) { }
EnemyClass::EnemyClass(const EnemyClass &copy) { *this = copy; }
EnemyClass::~EnemyClass() { }//{ std::cout << "EnemyClass dead" << std::endl; }

EnemyClass &EnemyClass::operator=(const EnemyClass &rhs)
{
    hp = rhs.hp;
    type = rhs.type;
	return *this;
}

std::string EnemyClass::getType() const { return type; }
int EnemyClass::getHP() const { return hp; }

void EnemyClass::takeDamage(int attackDamage)
{
	if (attackDamage > 0)
		this->hp -= attackDamage;
	if (this->hp < 0)
		this->hp = 0;
}