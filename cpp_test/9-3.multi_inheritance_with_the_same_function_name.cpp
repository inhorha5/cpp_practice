//
//  9-3.multi_inheritance_with_the_same_function_name.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>


using namespace std;


class BaseOne {
public:
    void SimpleFunction() {
        cout << "BaseOne" << endl;
    }
};


class BaseTwo {
public:
    void SimpleFunction() {
        cout << "BaseTwo" << endl;
    }
};


class MultiDerived : public BaseOne, protected BaseTwo {
public:
    void ComplexFunction() {
        BaseOne::SimpleFunction();
        BaseTwo::SimpleFunction();
    }
};


int main_9_3() {
    MultiDerived multiDerived;
    multiDerived.ComplexFunction();
    
    return 0;
}
