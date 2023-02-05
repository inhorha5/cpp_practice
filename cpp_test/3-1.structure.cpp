////
////  3-1.structure.cpp
////  cpp_test
////
////  Created by InHo Rha on 2/5/23.
////
//
//#include <iostream>
////#define IDMaxLen 20
//
//namespace CONSTANT4CAR{
//    enum{
//        IdMaxLen = 20,
//        MaxSpeed = 200,
//        FuelConsumptionInAccel = 2,
//        SpeedIncrementByAccel = 10,
//        SpeedDecrementByBreak = 10,
//    };
//};
//
//struct Car {
//    char gameId[CONSTANT4CAR::IdMaxLen];
//    int fuelGauge;
//    int currentSpeed;
//
//    void showCarState(){
//        std::cout << "Game ID: " << gameId << std::endl;
//        std::cout << "Fuel: " << fuelGauge << std::endl;
//        std::cout << "Current Speed: " << currentSpeed << std::endl;
//    }
//
//    void Accel(){
//        if (fuelGauge <= 0) return;
//
//        fuelGauge -= CONSTANT4CAR::FuelConsumptionInAccel;
//
//        if ((currentSpeed + CONSTANT4CAR::SpeedIncrementByAccel >= CONSTANT4CAR::MaxSpeed)){
//            currentSpeed = CONSTANT4CAR::MaxSpeed;
//            return;
//        }
//
//        currentSpeed += CONSTANT4CAR::SpeedIncrementByAccel;
//    }
//
//    void Break();
//};
//
//void Car::Break() {
//    if (currentSpeed < CONSTANT4CAR::SpeedDecrementByBreak) {
//        currentSpeed = 0;
//        return;
//    }
//
//    currentSpeed -= CONSTANT4CAR::SpeedDecrementByBreak;
//}
//
//int main_3_1(){
//    Car run99 = {"run99",100,0};
//    run99.Accel();
//    run99.Accel();
//    run99.showCarState();
//    run99.Break();
//    run99.showCarState();
//    return 0;
//}
