//
//  8-5.reference.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>

using namespace std;


class First3 {
public:
    void firstNormalFunc() {
        cout << "firstNormalFunc()" << endl;
    }
    
    virtual void myFunc() {
        cout << "First myFunc()" << endl;
    }
};


class Second3 : public First3 {
public:
    void secondNormalFunc() {
        cout << "secondNormalFunc()" << endl;
    }
    
    virtual void myFunc() {
        cout << "Second myFunc()" << endl;
    }
};


class Third3 : public Second3 {
public:
    void thirdNormalFunc() {
        cout << "thirdNormalFunc()" << endl;
    }
        
    virtual void myFunc() {
        cout << "Third myFunc()" << endl;
    }
};


int main_8_5() {
    Third3 third;
    third.firstNormalFunc();
    third.secondNormalFunc();
    third.thirdNormalFunc();
    third.myFunc();
    
    cout << " -------------------------- " << endl;
    
    Second3& second_ref = third;
    second_ref.firstNormalFunc();
    second_ref.secondNormalFunc();
//    second_ref.thirdNormalFunc();
    second_ref.myFunc();
    
    cout << " -------------------------- " << endl;
    
    First3& first_ref = third;
    first_ref.firstNormalFunc();
//    first_ref.secondNormalFunc();
//    first_ref.thirdNormalFunc();
    first_ref.myFunc();
    
    return 0;
}
