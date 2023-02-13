//
//  9-4.multi_inheritance_with_the_same_base.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>


using namespace std;


class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }
    
    void SimpleFunction() {
        cout << "BaseOne" << endl;
    }
};


class MiddleDerivedOne : virtual public Base {
public:
    MiddleDerivedOne() : Base() {
        cout << "MiddleDerivedOne Constructor" << endl;
    }
    
    void MiddleFunction1() {
        SimpleFunction();
        cout << "MiddleDerived1()" << endl;
    }
};



class MiddleDerivedTwo : virtual public Base {
public:
    MiddleDerivedTwo() : Base() {
        cout << "MiddleDerivedTwo Constructor" << endl;
    }
    
    void MiddleFunction2() {
        SimpleFunction();
        cout << "MiddleDerived2()" << endl;
    }
};


class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo {
public:
    LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo() {
        cout << "LastDerived Constructor" << endl;
    }
    
    void ComplexFunction() {
        MiddleFunction1();
        MiddleFunction2();
        SimpleFunction();
    }
};


int main_9_4() {
    LastDerived lastDerived;
    lastDerived.ComplexFunction();
    
    return 0;
}
