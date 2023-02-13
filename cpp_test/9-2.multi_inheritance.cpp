//
//  9-2.multi_inheritance.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>

using namespace std;


class BaseOne {
public:
    void SimpleFunction1() {
        cout << "BaseOne" << endl;
    }
};


class BaseTwo {
public:
    void SimpleFunction2() {
        cout << "BaseTwo" << endl;
    }
};


class MultiDerived : public BaseOne, protected BaseTwo {
public:
    void ComplexFunction() {
        SimpleFunction1();
        SimpleFunction2();
    }
};


int main_9_2() {
    MultiDerived multiDerived;
    multiDerived.ComplexFunction();
    
    return 0;
}
