#include <iostream>
#include <vector>
class weapons{
    public:
        int id=0;
        int range=0;
        int damage=0;
        std::string type;
        void setId(){
            std::cout<<id;
        }
        void printRange()
        {
            std::cout<<range;
        }
        void printDamage()
        {
            std::cout<<damage;
        }
        void printType()
        {
            std::cout<<type;
        }
        void printAll(){
            std::cout<<"\n"<<range<<"\n";
            std::cout<<damage<<"\n";
            std::cout<<type;
        }
};
