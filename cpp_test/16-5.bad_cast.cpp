//
//  16-5.bad_cast.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;


class Parent {
public:
    virtual void showInfo() {
        cout << "Parent Class" << endl;
    }
};


class Child : public Parent {
    void showInfo() {
        cout << "Child Class" << endl;
    }
};


int main_16_5() {
    Parent parent;
    Parent& ref = parent;
    
    try {
        Parent& parentRef = dynamic_cast<Child&>(ref);
        parentRef.showInfo();
    }
    catch(bad_cast expn){
        cout << expn.what() << endl;
    }
    
    return 0;
}
