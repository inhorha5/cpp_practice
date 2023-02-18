//
//  11-3.inheritance_overloading.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/18/23.
//

#include <iostream>

using namespace std;


class First {
private:
    int num1, num2;
    
public:
    First(int num1 = 1, int num2 = 0) : num1(num1), num2(num2) {};
    
    void showData() {
        cout << this->num1 << ", " << this->num2 << endl;
    }
    
    First& operator=(const First& ref) {
        cout << "First& operator=()" << endl;
        this->num1 = ref.num1;
        this->num2 = ref.num2;
        
        return *this;
    }
};


class Second : public First {
private:
    int num3, num4;
    
public:
    Second(int num1, int num2, int num3, int num4)
    : First(num1, num2), num3(num3), num4(num4) {};
    
    void showData() {
        First::showData();
        cout << this->num3 << ", " << this->num4 << endl;
    }
    
    Second& operator= (const Second& ref) {
        cout << "Second& operator=()" << endl;
        First::operator=(ref);
        this->num3 = ref.num3;
        this->num4 = ref.num4;
        
        return *this;
    }
};


int main_11_3() {
    Second second(1, 2, 3, 4);
    Second second_copy(0, 0, 0, 0);
    
    second_copy = second;
    second_copy.showData();
    
    return 0;
}
