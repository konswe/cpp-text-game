#include <iostream>
#include <vector>

#include "character.h"
#include "menu.h"
#include "enemies.h"

void fight(trent* enemy)
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
        menu();
        std::vector<int>defeatedEnemies; //storing all defeated enemies
        champion.health=0;
    }
    trent* trent1;
    fight(trent1);
    
}