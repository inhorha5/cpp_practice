//
//  4-4.constructor.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#include <iostream>

using namespace std;

class SimpleClass{
private:
    int num1;
    int num2;
public:
    SimpleClass() {
        this->num1 = 0;
        this->num2 = 0;
    }
    
    SimpleClass(int n) {
        this->num1 = n;
        this->num2 = 0;
    }
    
    SimpleClass(int n1, int n2) {
        this->num1 = n1;
        this->num2 = n2;
    }
    
    void showData() const {
        cout << this->num1 << ',' << this->num2 << endl;
    }
    
};

int main_4_4() {
    SimpleClass simpleClass1;
    simpleClass1.showData();
    
    SimpleClass simpleClass2(10);
    simpleClass2.showData();
    
    SimpleClass simpleClass3(10,20);
    simpleClass3.showData();
    return 0;
}
