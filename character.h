#include <iostream>
class character //vreating character with stats
{
public:
    std::string name;
    int health;
    int damage;
    int stamina;
    int knowledge;
    character(){ //when created give him this stats
        std::cin>>name;
        health = 5;
        damage = 5;
        stamina = 10;
        knowledge = 1;
    };
    ~character() //on death this will show up on screen (now at the end of the program)
    {
        std::cout<<"U died";
    };
};

