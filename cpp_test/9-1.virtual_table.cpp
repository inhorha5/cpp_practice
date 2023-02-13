//
//  9-1.virtual_table.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>

using namespace std;

class AAA {
private:
    int num1;
    
public:
    virtual void Func1() {
        cout << "Func1()" << endl;
    }
    
    virtual void Func2() {
        cout << "Func2()" << endl;
    }
};


class BBB : public AAA {
private:
    int num2;
    
public:
    virtual void Func1() {
        cout << "BBB:Func1()" << endl;
    }
    
    void Func3() {
        cout << "Func3()" << endl;
    }
};



int main_9_1() {
    AAA* a_ptr = new AAA();
    a_ptr->Func1();
    
    BBB* b_ptr = new BBB();
    b_ptr->Func1();
    
    return 0;
}
