#include <iostream>

class enemyLow
{
public:
    int health;
    int strength;

};

class trent : public enemyLow
{
public:
    std::string name;

    trent()
    {
        std::cout<<"Trent aproaches you slowly";
        name = "trent";
        health = 10;
        strength = 1;
    }
    ~trent()
    {
        std::cout<<"Trent has been defeated";
    }
};