//
//  8-2.overriding.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#include <iostream>

using namespace std;

class First {
public:
    void myFunc() {
        cout << "First Function" << endl;
    }
};

class Second : public First {
public:
    void myFunc() {
        cout << "Second Function" << endl;
    }
};

class Third : public Second {
public:
    void myFunc() {
        cout << "Third Function" << endl;
    }
};


int main() {
    Third* t_ptr = new Third();
    Second* s_ptr = t_ptr;
    First* f_ptr = t_ptr;
    
    f_ptr->myFunc(); s_ptr->myFunc(); t_ptr->myFunc();
    
    delete f_ptr, s_ptr, t_ptr;
    
    return 0;
}
