#include <iostream>
#include <vector>
class planeta
{
private:
    std::string name;
    int id;

public:
    int addSpecies(std::vector<std::string>species, std::string data){ //enemies on the planet
        species.push_back(data);
    }
    int setPlanetName(std::string nameOfThePlanet){
        name=nameOfThePlanet;
    }
};
