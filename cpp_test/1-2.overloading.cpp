//
//  main.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/4/23.
//

#include <iostream>

void testFunc() {
    std::cout << "testFunc() is called" << std::endl;
}

void testFunc(int num) {
    std::cout << "testFunc(int num) is called" << std:: endl;
}

void testFunc(int num, int num2) {
    std::cout << "tstFunc(int num, int num2) is called" << std::endl;
}

void testFunc(char character) {
    std::cout << "testFunc(char chracter) is called" <<std::endl;
}

void testFunc(double num) {
    std::cout << "testFunction(double num) is called" << std::endl;
}



int main_1_2() {
    testFunc();
    testFunc(1);
    testFunc('c');
    testFunc(3.14);
    return 0;
}
