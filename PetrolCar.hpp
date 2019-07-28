#pragma once
#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void feed() override;
    void changePetrolEngine(PetrolEngine* newEngine);
    int getGear() const;
    void setGear(int value);
protected:
    void refuel();
private:
    PetrolEngine* engine_;
};

