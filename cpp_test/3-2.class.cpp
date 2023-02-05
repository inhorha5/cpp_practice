//
//  3-1.structure.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

namespace CONSTANT4CAR{
    enum{
        IdMaxLen = 20,
        MaxSpeed = 200,
        FuelConsumptionInAccel = 2,
        SpeedIncrementByAccel = 10,
        SpeedDecrementByBreak = 10,
    };
};

using namespace CONSTANT4CAR;

class Car {
private:
    char gameId[IdMaxLen];
    int fuelGauge;
    int currentSpeed;
    
public:
    void initVariables(const char* id, int fuel);
    
    void showCarState();
    
    void Accel();
    
    void Break();
};

void Car::Break() {
    if (currentSpeed < SpeedDecrementByBreak) {
        currentSpeed = 0;
        return;
    }
    
    currentSpeed -= SpeedDecrementByBreak;
}

void Car::showCarState() {
    std::cout << "Game ID: " << gameId << std::endl;
    std::cout << "Fuel: " << fuelGauge << std::endl;
    std::cout << "Current Speed: " << currentSpeed << std::endl;
}

void Car::Accel() {
    if (fuelGauge <= 0) return;
    
    fuelGauge -= FuelConsumptionInAccel;
    
    if ((currentSpeed + SpeedIncrementByAccel >= MaxSpeed)){
        currentSpeed = MaxSpeed;
        return;
    }
    
    currentSpeed += SpeedIncrementByAccel;
}

void Car::initVariables(const char *id, int fuel){
    strcpy(gameId, id);
    fuelGauge = fuel;
    currentSpeed = 0;
}

int main_3_2(){
    Car run99;
    run99.initVariables("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.showCarState();
    run99.Break();
    run99.showCarState();
    
    std::cout << "--------------------------------" << std::endl;
    
    Car run30;
    run30.initVariables("run30",50);
    run30.Accel();
    run30.Accel();
    run30.showCarState();
    run30.Break();
    run30.showCarState();
    
    return 0;
}
