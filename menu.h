#include <iostream>


int menu(){
    int menuNumber=-1;
    std::cout<<"MENU\nChose option from 0 to 5:\n"; 
    while(menuNumber>5||menuNumber<0) //i need to change menunumber to string to exclude option 
    {                                   //that someone is going to put a letter in cin
        std::cout<<"0: exit\n1: stats\n2: move forward\n3: shop\n4: killed monsters\n";
        std::cin>>menuNumber;                     
        switch (menuNumber)
        {
        case 0:
            /* code */
            break;
        case 1:                 
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        
        default:
            break;
        }
        if(menuNumber>5||menuNumber<0)
            std::cout<<"Chose option from 0 to 5:\n";

        
    }
    
}