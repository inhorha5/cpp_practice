//
//  2-1.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/4/23.
//

#include <iostream>

using namespace std;

int main_2_1() {
    const char* string = "Hello World";
    const char* string2 = "Hello world2";
    int num2 = 20;
    const int num = 10;
    const int* ptr1 = &num;
//    char* const ptr2 = string;
    const int* const ptr3 = &num;
    
//    num = 20;
//    *ptr1 = 20;
//    ptr2 = string2;
//    ptr3 = &num2;
//    *ptr3 = 30;
    return 0;
}
