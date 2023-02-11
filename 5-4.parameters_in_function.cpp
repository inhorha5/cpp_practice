//
//  5-4.parameters_in_function.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/11/23.
//

#include <iostream>

using namespace std;

class SoSimple{
private:
    int num;
    
public:
    SoSimple(int n) : num(n) {};
    SoSimple(const SoSimple& copy) : num(copy.num) {
        cout << "Called SoSimple(const SoSimple& copy)" << endl;
    }
    
    void showData() {
        cout << "num: " << this->num << endl;
    }
};

void showSimpleFuncObject(SoSimple object) {
    object.showData();
}

int main_5_4() {
    SoSimple object(7);
    cout << "Constructor" << endl;
    showSimpleFuncObject(object);
    cout<< "Copy via Call Function" << endl;
    
    return 0;
}
