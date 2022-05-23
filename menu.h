#include <iostream>

int menu(){
    int menunumber=-1;
    std::cout<<"MENU\nChose option from 0 to 5:\n"; //later i will write here options +
    while(menunumber>5||menunumber<0){ //i need to change menunumber to string to exclude option 
        std::cin>>menunumber;           //that someone is going to put a letter in cin
        if(menunumber>5||menunumber<0)
            std::cout<<"Chose option from 0 to 5:\n";
    }
    
}