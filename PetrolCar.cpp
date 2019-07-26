#include "PetrolCar.hpp"
#include <iostream>
 
PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar()
{
    std::cout << __FUNCTION__ << std::endl;
    delete engine_; 
}
void PetrolCar::refuel()        { std::cout << __FUNCTION__ << std::endl; }
void PetrolCar::feed()          
{
    refuel();
    std::cout << "Thanks bro! All my " << engine_->getEnginePower() << " horses are happy now!"<<std::endl;
}
