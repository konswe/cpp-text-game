#include <iostream>

class enemyLow              //creates enemy
{
public:
    std::string name;
    int health;
    int strength;
    void greetings()
    {
        std::cout<<"X aproaches you slowly";
    };
    void defeated()
    {
        std::cout<<"X has been defeated";
    }
    void setHealth(int hp)
    {
        health = hp;
    }
    void setAttack(int atk)
    {
        strength = atk;
    }

};