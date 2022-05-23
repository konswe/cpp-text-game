#include <iostream>


int menu(){
    int menuNumber=-1;
    std::cout<<"MENU\nChose option from 0 to 5:\n"; 
    while(menuNumber>5||menuNumber<0)        //later i will write here options +
    {                                        //i need to change menunumber to string to exclude option 
        std::cin>>menuNumber;                //that someone is going to put a letter in cin     
        if(menuNumber>5||menuNumber<0)
            std::cout<<"Chose option from 0 to 5:\n";

        
    }
    
}