//
//  6-2.const_overloading.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class SoSimple {
private:
    int num;
    
public:
    SoSimple(int n) : num(n) {};
    
    SoSimple addNum(int n) {
        this->num += n;
        
        return *this;
    }
    
    void SimpleFunction() {
        cout << "SimpleFunction(): " << this->num << endl;
    }
    
    void SimpleFunction() const {
        cout << "SimpleFunction() const: " << this->num << endl;
    }
};

void printYourFunction(const SoSimple& obj){
    obj.SimpleFunction();
}

int main_6_2() {
    SoSimple object1(2);
    const SoSimple object2(5);
    
    object1.SimpleFunction();
    object2.SimpleFunction();
    
    printYourFunction(object1);
    printYourFunction(object2);
    
    return 0;
}
