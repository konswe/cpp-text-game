#include <iostream>
class character //vreating character with stats
{
public:
    int health;
    int damage;
    int stamina;
    int knowledge;
    character(){ //when created give him this stats
        health = 5;
        damage = 5;
        stamina = 10;
        knowledge = 1;
    };
    ~character() //on death this will show up on screen
    {
        std::cout<<"U died";
    };
};

