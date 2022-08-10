#include <iostream>
#include <vector>

#include "character.h"
#include "enemies.h"
#include "enemyLowMon.h"
#include "weapons.h"

void fight(enemyLow* enemy)     //combat for low level enemies
{
    enemy->greetings();
    std::cout<<"\n";
    enemy->defeated();
    std::cout<<"\n";
}

int menu(int health, int damage, int stamina, int knowledge , std::vector<int>defeatedEnemies){
    int menuNumber=-1;
    std::cout<<"MENU\nChose option from 0 to 5:\n"; 
    while(menuNumber>5||menuNumber<0) //i need to change menunumber to string to exclude option 
    {                                   //that someone is going to put a letter in cin
        std::cout<<"0: exit\n1: stats\n2: move forward\n3: shop\n4: killed monsters\n";
        std::cin>>menuNumber;                     
        switch (menuNumber)
        {
        case 0:
            break;
        case 1:                 
            std::cout<<"health: "<<health;
            std::cout<<"\ndamage: ";
            std::cout<<damage;
            std::cout<<"\nknowledge: ";
            std::cout<<knowledge;
            std::cout<<"\nstamina: ";
            std::cout<<stamina;
            std::cout<<"\n";
            break;
        case 2:
            enemyLow* enemy;
            fight(enemy);
            break;
        case 3:
            //shop
            break;
        case 4:
            for(int i=0;i<defeatedEnemies.size();i++)
            {
                std::cout<<defeatedEnemies[i]<<" ";
                if(i%5==0)std::cout<<"\n";
            }
            //killed monsters
            break;
        
        default:
            break;
        }
        if(menuNumber>5||menuNumber<0)
            std::cout<<"Chose option from 0 to 5:\n";

        
    }
    
}

int main()
{

    int addedDmg=0;
    int addedArmor=0;
    std::string currentWeapon;
    std::string currentArmor;
    //weapons
    //shortSword
    weapons shortSword;
    shortSword.id = 0;
    shortSword.range = 1;
    shortSword.damage = 2;
    shortSword.type = "sword";
    //longSword
    weapons longSword;
    longSword.id = 1;
    longSword.range = 2;
    longSword.damage = 3;
    longSword.type = "sword";
    //shortBow
    weapons shortBow;
    shortBow.id = 2;
    shortBow.range = 3;
    shortBow.damage = 3;
    shortBow.type = "bow";
    //longBow
    weapons longBow;
    longBow.id = 3;
    longBow.range = 4;
    longBow.damage = 2;
    longBow.type = "bow";

  
    character champion;

    std::vector<int>weapons;
    for(int i = 0;i<20;i++){
        weapons.push_back(i); //weapons and theirs id
    }
    std::vector<int>defeatedEnemies; //storing all defeated enemies
    while(champion.health){
        int number;
        number = menu(champion.health, champion.damage, champion.stamina, champion.knowledge, defeatedEnemies); //menu in loop, whole gameplay
        if(number==0)return 0;
        champion.health=5; //for now to end the program easly
    }
    
    

    
}