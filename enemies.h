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
        std::string name = "trent";
        health = 10;
        strength = 1;
    }
    void greetings()
    {
        std::cout<<"Trent aproaches you slowly";
    };
    void defeated()
    {
        std::cout<<"Trent has been defeated";
    }

};