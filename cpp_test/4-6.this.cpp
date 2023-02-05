//
//  4-6.this.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class SoSimple {
private:
    int num;
    
public:
    SoSimple(int n) : num(n) {
        cout << "num= " << this->num << ", ";
        cout << "address= " << this << endl;
    }
    
    void showSimpleData() {
        cout << this->num << endl;
    }
    
    SoSimple* getThisPointer() {
        return this;
    }
};

int main_4_6() {
    SoSimple simple1(100);
    simple1.showSimpleData();
    SoSimple* simplePtr = simple1.getThisPointer();
    cout << simplePtr << ", ";
    simplePtr->showSimpleData();
    return 0;
}
