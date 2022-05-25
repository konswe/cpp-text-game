#include <iostream>
#include <vector>

#include "character.h"
#include "menu.h"
#include "enemies.h"
#include "enemyLowMon.h"

void fight(enemyLow* enemy)     //combat for low level enemies
{
    enemy->greetings();
    std::cout<<"\n";
    enemy->defeated();
    std::cout<<"\n";
}

main()
{
    character champion;
    while(champion.health){
        menu(champion);
        std::vector<int>defeatedEnemies; //storing all defeated enemies
        champion.health=0;
    }


    //testing
    enemyLow enemy1;
    trent trent1;
    enemy1.setHealth(trent1.health);
    std::cout<<"\n"<<enemy1.health<<"\n";
    fight(&enemy1);
    
}