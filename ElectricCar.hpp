#pragma once
#include "ElectricEngine.hpp"
#include "Car.hpp"

class ElectricCar : public virtual Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void feed() override;
protected:
    void charge();
private:
    ElectricEngine* engine_;
};

