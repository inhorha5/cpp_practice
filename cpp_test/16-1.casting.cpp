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


int main_16_1() {
    Car* car1 = new Truck(80, 200);
    Truck* truck1 = (Truck*) car1;
//    Truck* castingTruck1 = dynamic_cast<Truck*>(car1);
    truck1 -> showTruckState();
    cout << endl;
    
    Car* car2 = new Car(120);
    Truck* truck2 = (Truck*)car2;
//    Truck* castingTruck2 = dynamic_cast<Truck*>(car2);
    truck2->showTruckState();
    
    Truck* truck3 = new Truck(100,150);
    Car* car3 = dynamic_cast<Car*>(truck3);
    
    return 0;
}
