//
//  16-1.casting.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;

class Car {
private:
    int fuelGauge;
    
public:
    Car(int fuel) : fuelGauge(fuel) {};
    void showFuelGauage() {
        cout << "left fuel: " << this->fuelGauge << endl;
    }
};

class Truck : public Car{
private:
    int freightWeight;
    
public:
    Truck(int fuel, int weight) : Car(fuel), freightWeight(weight) {};
    
    void showTruckState() {
        showFuelGauage();
        cout << "freight weight: " << this->freightWeight << endl;
    }
};


int main_16_3() {
    Car* car1 = new Truck(80, 200);
    Truck* castingTruck1 = static_cast<Truck*>(car1);
    castingTruck1 -> showTruckState();
    cout << endl;
    
    Car* car2 = new Car(120);
    Truck* castingTruck2 = static_cast<Truck*>(car2);
    castingTruck2->showTruckState();
    
    
    return 0;
}
