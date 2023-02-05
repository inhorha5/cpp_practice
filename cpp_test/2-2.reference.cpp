//
//  2-2.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/4/23.
//

#include <iostream>

using namespace std;

void swapValuebyReference(int& ref1, int& ref2);

int main_2_2() {
    int num1 = 1;
    int& num2 = num1;
    
//    // not allowed reference
//    int& ref = 20;
//    int& ref;
//    int& ref = NULL;
    
    num2 = 10;
    
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 <<endl;
    
    //swap by reference
    int a = 10; int b = 20;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    swapValuebyReference(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    
    //const reference
    const int& ref = 30;
    cout << "ref: " << ref << endl;
    return 0;
}

void swapValuebyReference(int& ref1, int& ref2){
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
