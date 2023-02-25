//
//  15-4.stack_exception.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>

using namespace std;

void function1();
void function2();
void function3();


int main_15_4() {
    try {
        function1();
    }
    catch (int expn) {
        cout << "Exception code: " << expn << endl;
    }
    
    return 0;
}


void function1() {
    cout << "function1()" << endl;
    function2();
}

void function2() {
    cout << "function2()" << endl;
    function3();
}

void function3() {
    cout << "function3()" << endl;
    throw - 1;
}
