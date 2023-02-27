//
//  16-2.downcast_by_dynamic_cast.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;


class Simple{
public:
    virtual void showSimpleInfo() {
        cout << "Simple Base Class" << endl;
    }
};

class Complex : public Simple {
public:
    void showSimpleInfo() {
        cout << "Complex Child Class" << endl;
    }
};


int main_16_2() {
    Simple* simplePtr = new Complex;
    Complex* complexPtr = dynamic_cast<Complex*>(simplePtr);
    complexPtr->showSimpleInfo();
    
    return 0;
}
